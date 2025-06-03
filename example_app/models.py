from django.db import models
#
# from .slugify import unique_slug_generator
from django.dispatch import receiver
from django.contrib.auth.models import User
import random
import string
from django.utils.text import slugify

options = (('B','Basic'),('E','Easy'),('M','Medium'),('D','Difficult'))

class Course(models.Model):
    course_title = models.CharField(max_length=30)
    slug = models.SlugField(max_length=255,unique=True, null=True, blank=True)
    course_description = models.TextField(null=True,blank=True)  # Field name made lowercase.
    reference = models.TextField(null=True,blank=True)  # Field name made lowercase.
    featured_image = models.ImageField(null=True)
    author = models.CharField(max_length=50,null=True)
    def __str__(self):
        return self.course_title

class Visitor(models.Model):
    email = models.CharField(max_length=100)
    def __str__(self):
        return self.email

class Chapter(models.Model):
    course = models.ForeignKey(Course,on_delete=models.CASCADE)
    chapter_no = models.IntegerField()
    chapter_title = models.CharField(max_length=50)
    slug = models.SlugField(max_length=255,null=True, blank=True)
    reference = models.TextField(null=True, blank=True)  # Field name made lowercase.
    exercise = models.TextField(null=True, blank=True)
    featured_image = models.ImageField(null=True,blank=True)

    def __str__(self):
        return self.chapter_title


class Program(models.Model):
    program_title = models.CharField(max_length=250)
    slug = models.SlugField(max_length=255,unique=True, null=True, blank=True)
    program_description = models.TextField()
    complexity = models.CharField(max_length=1,choices=options,default='B')
    solution = models.TextField(null=True,blank=True)
    solution_path = models.CharField(null=True,blank=True,max_length=1000)
    explanation = models.TextField(null=True,blank=True)
    chapter = models.ForeignKey(Chapter,on_delete=models.CASCADE)
    raptor_file = models.ImageField(upload_to="raptor",null=True,blank=True)
    output_file = models.ImageField(upload_to="output",null=True,blank=True)
    featured_image = models.ImageField(null=True,blank=True)

    def __str__(self):
        return self.program_title

class Comment_Program(models.Model):
    program = models.ForeignKey(Program,on_delete=models.CASCADE)
    comment = models.TextField()
    commented_by = models.ForeignKey(User, on_delete=models.CASCADE)



# Create your models here.
class Blog(models.Model):
    blog_name = models.CharField(max_length=20)
    slug = models.SlugField(max_length=255, null=True, blank=True)
    author = models.CharField(max_length=50,null=True)
    def __str__(self):
        return self.blog_name

class Post(models.Model):
    post_title = models.CharField(max_length = 225)
    slug = models.SlugField(max_length=255,unique=True,blank=True)
    post_body = models.TextField()
    posted_on = models.DateTimeField()
    blog = models.ForeignKey(Blog,on_delete=models.CASCADE)
    featured_image = models.ImageField(null=True)

    def __str__(self):
        return self.post_title

class Comment(models.Model):
    post = models.ForeignKey(Post,on_delete=models.CASCADE)
    comment = models.TextField()
    commented_by = models.ForeignKey(User,on_delete=models.SET_NULL,null=True)

#To Create Slug

def random_string_generator(size=10, chars=string.ascii_lowercase + string.digits):
    return ''.join(random.choice(chars) for _ in range(size))

def unique_slug_generator(instance, new_slug=None):
    if new_slug is not None:
        slug = new_slug
    else:
        # We are using .lower() method for case insensitive
        # you can use instance.<fieldname> if you want to use another field
        if(type(instance)==type(Post())):
            str = replace_all(instance.post_title)
        elif(type(instance)==type(Program())):
            str = replace_all(instance.program_title)
        elif(type(instance)==type(Course())):
            str = replace_all(instance.course_title)
        elif(type(instance)==type(Chapter())):
            str = replace_all(instance.chapter_title)
        elif(type(instance)==type(Blog())):
            str = replace_all(instance.blog_name)
        else:
            str = replace_all(instance)
        slug = slugify(str)

    Klass = instance.__class__
    qs_exists = Klass.objects.filter(slug=slug).exists()
    if qs_exists:
        new_slug = "{slug}-{randstr}".format(
                    slug=slug,
                    randstr=random_string_generator(size=4)
                )
        return unique_slug_generator(instance, new_slug=new_slug)
    return slug

def replace_all(text):
    rep = {
        'ı':'i',
        'ş':'s',
        'ü':'u',
        'ö':'o',
        'ğ':'g',
        'ç':'c'
    }
    for i, j in rep.items():
            text = text.replace(i, j)
    return text

@receiver(models.signals.pre_save, sender=Post)
def auto_slug_generator_post(sender, instance, **kwargs):
    """
    Creates a slug if there is no slug.
    """
    if not instance.slug:
        instance.slug = unique_slug_generator(instance)

@receiver(models.signals.pre_save, sender=Program)
def auto_slug_generator_prog(sender, instance, **kwargs):
    """
    Creates a slug if there is no slug.
    """
    if not instance.slug:
        instance.slug = unique_slug_generator(instance)
   
@receiver(models.signals.pre_save, sender=Course)
def auto_slug_generator_course(sender, instance, **kwargs):
    """
    Creates a slug if there is no slug.
    """
    if not instance.slug:
        instance.slug = unique_slug_generator(instance)

@receiver(models.signals.pre_save, sender=Chapter)
def auto_slug_generator_chapter(sender, instance, **kwargs):
    """
    Creates a slug if there is no slug.
    """
    if not instance.slug:
        instance.slug = unique_slug_generator(instance)

@receiver(models.signals.pre_save, sender=Blog)
def auto_slug_generator_blog(sender, instance, **kwargs):
    """
    Creates a slug if there is no slug.
    """
    if not instance.slug:
        instance.slug = unique_slug_generator(instance)
