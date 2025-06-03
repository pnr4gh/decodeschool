from django.forms import ModelForm
from django import forms
from .models import Comment, Comment_Program

class CommentForm(ModelForm):
    comment = forms.CharField(widget=forms.Textarea(attrs={'cols': 60, 'rows': 5}))
    class Meta:
        model = Comment
        fields = ['comment']

class CommentForm_P(ModelForm):
    comment = forms.CharField(widget=forms.Textarea(attrs={'cols': 60, 'rows': 5}))
    class Meta:
        model = Comment_Program
        fields = ['comment']

