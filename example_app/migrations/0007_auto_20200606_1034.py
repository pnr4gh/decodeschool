# Generated by Django 2.2.13 on 2020-06-06 10:34

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('example_app', '0006_auto_20200604_0905'),
    ]

    operations = [
        migrations.AlterField(
            model_name='chapter',
            name='slug',
            field=models.SlugField(blank=True, max_length=255, null=True),
        ),
    ]
