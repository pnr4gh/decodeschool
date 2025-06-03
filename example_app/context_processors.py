from .models import Course, Blog


def add_variable_to_context(request):
    courses = Course.objects.all()
    blogs = Blog.objects.all()
    return {
        'courses': courses,
        'blogs' : blogs
    }