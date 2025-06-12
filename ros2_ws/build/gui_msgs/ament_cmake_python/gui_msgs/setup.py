from setuptools import find_packages
from setuptools import setup

setup(
    name='gui_msgs',
    version='1.1.0',
    packages=find_packages(
        include=('gui_msgs', 'gui_msgs.*')),
)
