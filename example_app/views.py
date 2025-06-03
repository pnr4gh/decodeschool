from django.shortcuts import render, redirect
from .models import Visitor, Course, Chapter, Program, Blog, Post, Comment
from django.http import JsonResponse, HttpResponse, HttpResponseRedirect
import pytz
import datetime
from django.core.mail import send_mail
from datetime import date
import openpyxl
import os
from django.conf import settings
from .forms import CommentForm_P, CommentForm
from django.contrib.auth import login, authenticate
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth import logout

'''
def load_program(request):
    if "GET" == request.method:
        return render(request, 'decodeschool/load_program.html', {})
    else:
        excel_file = request.FILES["excel_file"]

        # you may put validations here to check extension or file size

        wb = openpyxl.load_workbook(excel_file)

        # getting a particular sheet by name out of many sheets
        worksheet = wb["Sheet1"]
        

        excel_data = list()
        # iterating over the rows and
        # getting value from each cell in row
        for row in worksheet.iter_rows():
            row_data = list()
            for cell in row:
                row_data.append(str(cell.value))
            
            chapter = Chapter.objects.get(id=int(row_data[2]))
            program = Program(program_title=row_data[0],program_description=row_data[1],chapter=chapter,solution_path=row_data[3])
            program.save()
	    
        return render(request, 'decodeschool/load_program.html')


'''

def ads_text(request):
    try:
        file=open(os.path.join(settings.BASE_DIR, 'ads.txt'),'r')
        content = file.read()
        file.close()        
        return HttpResponse(content, content_type='text/plain')

    except IOError:
        return str(IOError)

# Create your views here.

def about_me(request):
    

    return render(request,'decodeschool/about_me.html',{})

def about_training(request):
    return render(request,'decodeschool/about_training.html',{})

def logout_view(request):
    logout(request)
    return redirect('home')

def signup(request):
    if request.method == 'POST':
        form = UserCreationForm(request.POST)
        if form.is_valid():
            form.save()
            username = form.cleaned_data.get('username')
            raw_password = form.cleaned_data.get('password1')
            user = authenticate(username=username, password=raw_password)
            login(request, user)
            return redirect('home')
    else:
        form = UserCreationForm()
    return render(request, 'decodeschool/signup.html', {'form': form})


def home(request):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    
    return render(request, 'decodeschool/index.html',{'courses':courses,'blogs':blogs})

def course_detail(request,course,chapter=None):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    if chapter != None:
        chapter = Chapter.objects.get(slug=chapter,course__slug=course)
        return render(request, 'decodeschool/chapter.html',{'chapter':chapter,'courses':courses,'blogs':blogs})
    else:
        chapter = "all"
        course = Course.objects.get(slug=course)
        return render(request, 'decodeschool/chapter.html',{'course':course,'chapter':chapter,'courses':courses,'blogs':blogs})


def program_detail(request,course,chapter,program):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    program = Program.objects.get(slug=program,chapter__slug=chapter,chapter__course__slug=course)
    next_prog = Program.objects.filter(chapter__course__slug=course, id__gt=program.id).order_by('id').first()
    prev_prog = Program.objects.filter(chapter__course__slug=course, id__lt=program.id).order_by('-id').first()
    message = ""
    if request.method == 'POST':
        if request.user.is_authenticated:
            c_form = CommentForm_P(request.POST)
            comment = c_form.save(commit=False)
            comment.program=program
            comment.commented_by=request.user
            comment.save()
            message = "Comment posted"
        else:
            message = "Login to Comment"
    
    c_form = CommentForm_P()

    return render(request, 'decodeschool/program.html',{'program':program,'next':next_prog,'prev':prev_prog,'courses':courses,'blogs':blogs,'c_form':c_form,'message':message})


def blog_detail(request,blog):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    blog = Blog.objects.get(slug=blog)
    return render(request, 'decodeschool/blog.html',{'courses':courses,'blog':blog})
    
def verify(request):
    
    return render(request, 'decodeschool/verify.html',{})

def post_detail(request,blog,post):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    post = Post.objects.get(slug=post)
    next_post = Post.objects.filter(blog__slug=blog, id__gt=post.id).order_by('id').first()
    prev_post = Post.objects.filter(blog__slug=blog, id__lt=post.id).order_by('-id').first()
    message = ""
    if request.method == 'POST':
        if request.user.is_authenticated:
            c_form = CommentForm(request.POST)
            comment = c_form.save(commit=False)
            comment.post=post
            comment.commented_by=request.user
            comment.save()
            message = "Comment posted"
        else:
            message = "Login to Comment"

    c_form = CommentForm()
    return render(request, 'decodeschool/post.html',{'post':post,'next':next_post,'prev':prev_post,'courses':courses,'blog':blog,'c_form':c_form,'message':message})

def subscribe(request):
    message=dict()
    email = request.GET.get('subscribe')
    if email != '':
        if not Visitor.objects.filter(email=email).exists():
            visitor = Visitor(email=email)
            visitor.save()
            message['info'] = 'Success'
        
        else:
            message['info'] = 'Email already exists'
    else:
        message['info'] = 'Invalid Email'
    return JsonResponse(message)
