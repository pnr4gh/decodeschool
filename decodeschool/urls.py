"""decodeschool URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/3.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path, include
from django.conf import settings
from django.conf.urls.static import static

from django.views.generic.base import RedirectView
from django.contrib.staticfiles.storage import staticfiles_storage
from example_app.views import ads_text
from track.views import get_assignment, change_password, get_all_problems, get_lc_problems, filter_institute, view_dashboard, update_leet, myadmin, import_from_excel

urlpatterns = [
    path('filter_assignment',get_assignment,name="filter_assignment"),
    path('getproblems/',get_all_problems,name='getproblems'),
    path('password/', change_password, name='change_password'),
    path('filter_institute',filter_institute,name="filter_institute"),
    path('get_lc_problems/<str:pk>',get_lc_problems,name='get_lc_problems'),
    path('myadmin',myadmin,name="myadmin"),
    path('upload_students',import_from_excel,name="upload_students"),
    path('dashboard',view_dashboard,name='dashboard'),
    path('update_leet/<str:uh>',update_leet,name='update_leetcode'),
    path("ads.txt", ads_text, name='ads'),
    path('admin/', admin.site.urls),
    path('summernote/', include('django_summernote.urls')),
    path('',include('example_app.urls')),
    path('track',include('track.urls')),
    
    
    


]



if settings.DEBUG:
    urlpatterns = static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT) + urlpatterns
