# -*- coding: utf-8 -*-
# Generated by Django 1.10 on 2018-08-28 18:15
from __future__ import unicode_literals

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('user_panel', '0002_auto_20180828_1756'),
    ]

    operations = [
        migrations.AddField(
            model_name='like',
            name='user',
            field=models.ForeignKey(default=0, on_delete=django.db.models.deletion.CASCADE, to='user_panel.Customer'),
        ),
    ]