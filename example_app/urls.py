from django.urls import path
from .views import logout_view, signup, home, course_detail, program_detail, blog_detail, post_detail, about_me, about_training, subscribe, verify
from django.contrib.auth import views as auth_views
urlpatterns = [ 
    path('',home,name='home'),
    path('signup/',signup, name='signup'),
    path('login/', auth_views.LoginView.as_view(template_name='decodeschool/login.html'), name='login'),
    path('logout/',logout_view,name='logout'),
    path('about_me/',about_me,name='about_me'),
    path('about_training/',about_training,name='about_training'),
    path('verify/clement_db_2019',verify,name="verify"),
    path('blog/<str:blog>',blog_detail,name='blog_detail'),
    path('blog/<str:blog>/<str:post>',post_detail,name='post_detail'),
    path('<str:course>/full-text',course_detail,name='course_detail_o'),
    path('<str:course>/Examples',course_detail,name='course_detail'),
    path('<str:course>/<str:chapter>',course_detail,name='chapter_detail'),
    path('<str:course>/<str:chapter>/<str:program>',program_detail,name='program_detail'),
    path('subscribe/',subscribe,name="subscribe"),
    #path('load_program/',load_program,name='load_program')
    
    
]
