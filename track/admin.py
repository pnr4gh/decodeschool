from django.contrib import admin
from . import models

# Register your models here.
admin.site.register(models.Platform)
admin.site.register(models.Problem)
admin.site.register(models.Profile)
admin.site.register(models.Department)
admin.site.register(models.Batch)
admin.site.register(models.Institution)
admin.site.register(models.Solved_Problem)
admin.site.register(models.User_Handle)
admin.site.register(models.ProblemTags)

admin.site.register(models.Assignment)
admin.site.register(models.Assignment_Problems)
admin.site.register(models.Course)
admin.site.register(models.Course_Enrollement)
