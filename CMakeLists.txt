cmake_minimum_required(VERSION 3.18)
project(termcolors)


add_library(termcolors SHARED src/termcolor.c)
target_include_directories(termcolors PUBLIC include)


