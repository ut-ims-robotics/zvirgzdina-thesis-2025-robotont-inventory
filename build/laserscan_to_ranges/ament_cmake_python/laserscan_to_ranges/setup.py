from setuptools import find_packages
from setuptools import setup

setup(
    name='laserscan_to_ranges',
    version='0.0.0',
    packages=find_packages(
        include=('laserscan_to_ranges', 'laserscan_to_ranges.*')),
)
