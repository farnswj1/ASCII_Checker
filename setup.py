from distutils.core import Extension, setup


module = Extension("ascii_checker", sources=['ascii_checker.c'])

setup(
    name='ASCII Checker',
    version='1.0.0',
    description='This is a package for asciiChecker',
    ext_modules=[module]
)
