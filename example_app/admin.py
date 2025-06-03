from django.contrib import admin
from django_summernote.admin import SummernoteModelAdmin
from . import models as exm
from .slugify import unique_slug_generator
from import_export import resources, fields
from import_export.admin import ImportExportModelAdmin, ImportExportMixin
from import_export.widgets import ManyToManyWidget, ForeignKeyWidget

admin.site.site_header = "Decode School"
admin.site.site_title = "Decode School"
admin.site.register(exm.Visitor)
class ProgramResource(resources.ModelResource):

  chapter = fields.Field(
        column_name='chapter',
        attribute='chapter',
        widget=ForeignKeyWidget(exm.Chapter, 'id'))
  def before_import_row(self,row, **kwargs):
                value = row['program_title']
                row['slug'] = unique_slug_generator(value)
  class Meta:
    model = exm.Program


@admin.register(exm.Course)
class CourseModelAdmin(SummernoteModelAdmin):
    summernote_fields = '__all__'

@admin.register(exm.Chapter)
class ChapterModelAdmin(SummernoteModelAdmin):
    summernote_fields = '__all__'
    list_display = ('chapter_title','chapter_no')
    list_filter = ['course__course_title']

@admin.register(exm.Program)   
class ProgramModelAdmin(SummernoteModelAdmin,ImportExportModelAdmin):
    resource_class = ProgramResource
    summernote_fields = '__all__'
    list_display = ('program_title','chapter')
    list_filter = ['complexity','chapter__course__course_title','chapter__chapter_title']
    search_fields = ['program_title','chapter__course__course_title','chapter__chapter_title']

@admin.register(exm.Post)
class PostModelAdmin(SummernoteModelAdmin):
    summernote_fields = '__all__'
    date_hierarchy = 'posted_on'
    list_display = ('post_title','blog')
    list_filter = ['blog']
    search_fields = ['post_title']


@admin.register(exm.Comment_Program)
class CommentProgramModelAdmin(admin.ModelAdmin):
    list_display = ('comment','program')
    list_filter = ['program']

@admin.register(exm.Comment)
class CommentModelAdmin(admin.ModelAdmin):
    list_display = ('comment','post')
    list_filter = ['post__post_title']

admin.site.register(exm.Blog)
# Register your models here.
