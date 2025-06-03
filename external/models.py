from django.db import models

# Create your models here.

class Industry(models.Model):
    name = models.CharField(max_length=255)
    title = models.CharField(max_length=255)
    highlights = models.TextField()
    image = models.ImageField(upload_to='industry',null=True)
    def __str__(self):
        return self.name

class Course(models.Model):
    name = models.CharField(max_length=255)
    sponsor = models.ForeignKey(Industry,on_delete=models.CASCADE)
    certification = models.BooleanField(default=True)
    badge = models.BooleanField(default=False)
    highlights=models.TextField()
    link = models.CharField(max_length=255)

    def __str__(self):
        return self.name