# Generated by Django 5.1.7 on 2025-03-25 05:40

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('myapp', '0004_remove_doctor_profile_picture_and_more'),
    ]

    operations = [
        migrations.RenameField(
            model_name='appointment',
            old_name='date',
            new_name='appointment_date',
        ),
        migrations.RenameField(
            model_name='appointment',
            old_name='time',
            new_name='appointment_time',
        ),
        migrations.RemoveField(
            model_name='appointment',
            name='created_at',
        ),
    ]
