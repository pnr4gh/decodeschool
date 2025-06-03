from django.db import models
from django.contrib.auth.models import User

# Create your models here.

class Batch(models.Model):
    start_year = models.IntegerField()
    end_year = models.IntegerField()

    def __str__(self):
        return str(self.end_year)

class Department(models.Model):
    short_name = models.CharField(max_length=6)
    name = models.CharField(max_length=50)
    def __str__(self):
        return self.short_name

class Institution(models.Model):
    name = models.CharField(max_length=255)

    def __str__(self):
        return self.name

class Platform(models.Model):
    name = models.CharField(max_length=255)
    url = models.CharField(max_length=255)
    def __str__(self):
        return self.name

class Problem(models.Model):
    problem_title = models.CharField(max_length=255)
    platform = models.ForeignKey(Platform, on_delete = models.CASCADE)
    complexity = models.CharField(max_length=50, null=True)
    problem_slug = models.CharField(max_length=255, null=True)

    def __str__(self):
        return self.problem_title
    
    
class ProblemTags(models.Model):
    problem = models.ForeignKey(Problem, on_delete=models.CASCADE)
    topictags = models.CharField(max_length=50)

    def __str__(self):
        return self.problem.problem_title + "(" + self.topictags + ")"

class Profile(models.Model):
    user = models.ForeignKey(User,on_delete=models.CASCADE)
    email = models.CharField(max_length=100)
    mobile_no = models.CharField(max_length=10)
    batch  = models.ForeignKey(Batch, on_delete=models.CASCADE)
    department = models.ForeignKey(Department,on_delete=models.CASCADE)
    institute = models.ForeignKey(Institution,on_delete=models.CASCADE)

    def __str__(self):
        return self.user.username
    
    @property
    def get_easy_count(self):
        easy_count = Solved_Problem.objects.filter(user=self.user,problem__complexity="Easy").count()
        return easy_count
    
    @property
    def get_medium_count(self):
        medium_count = Solved_Problem.objects.filter(user=self.user,problem__complexity="Medium").count()
        return medium_count

    @property
    def get_hard_count(self):
        hard_count = Solved_Problem.objects.filter(user=self.user,problem__complexity="Hard").count()
        return hard_count

    @property
    def get_count(self):
        count = Solved_Problem.objects.filter(user=self.user).count()
        return count

    
    @property
    def get_leetcode_username(self):
        handle = User_Handle.objects.get(user=self.user, platform__name="Leet Code")
        return handle.user_handle

    @property
    def get_leetcode_last_update(self):
        handle = User_Handle.objects.get(user=self.user, platform__name="Leet Code")
        return handle.last_update

class Course(models.Model):
    
    course_title = models.CharField(max_length=255,null=True)

    def __str__(self):
        return self.course_title

class Course_Enrollement(models.Model):
    user= models.ForeignKey(User,on_delete=models.CASCADE)
    course = models.ForeignKey(Course,on_delete=models.CASCADE)

    def __str__(self):
        return self.user.username + " " + self.course.course_title
   
class User_Handle(models.Model):
    user = models.ForeignKey(User,on_delete=models.CASCADE)
    platform = models.ForeignKey(Platform, on_delete = models.CASCADE)
    user_handle = models.CharField(max_length=255)
    last_update = models.DateField(null=True, blank=True)
    def __str__(self):
        return self.user_handle


class Solved_Problem(models.Model):
    problem = models.ForeignKey(Problem, on_delete=models.CASCADE)
    user = models.ForeignKey(User,on_delete=models.CASCADE)

class Assignment(models.Model):
    name = models.CharField(max_length=55)
    start_date = models.DateField()
    end_date = models.DateField()

    def __str__(self):
        return self.name

class Assignment_Problems(models.Model):
    assignment = models.ForeignKey(Assignment,on_delete=models.CASCADE)
    problem = models.ForeignKey(Problem,on_delete=models.CASCADE)

    def __str__(self):
        return self.assignment.name + " " + self.problem.problem_title


    





    
