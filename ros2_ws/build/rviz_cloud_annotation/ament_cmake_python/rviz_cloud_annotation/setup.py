from setuptools import find_packages
from setuptools import setup

setup(
    name='rviz_cloud_annotation',
    version='0.0.0',
    packages=find_packages(
        include=('rviz_cloud_annotation', 'rviz_cloud_annotation.*')),
)
