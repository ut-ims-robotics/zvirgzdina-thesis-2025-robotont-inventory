from setuptools import find_packages
from setuptools import setup

setup(
    name='robotont_msgs',
    version='0.2.0',
    packages=find_packages(
        include=('robotont_msgs', 'robotont_msgs.*')),
)
