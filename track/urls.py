from django.urls import path
from . import views
urlpatterns = [ 
    path('getproblems/',views.get_all_problems,name='getproblems'),
     
    
]
