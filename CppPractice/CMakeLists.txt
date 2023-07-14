cmake_minimum_required(VERSION 3.14)
project(CppPractice LANGUAGES CXX)

add_subdirectory (Chapter1/)
add_subdirectory (Chapter2/)
add_subdirectory (Chapter3/)
add_subdirectory (Chapter4/)

add_custom_target(ProjectRelatedFiles SOURCES
    .gitignore
    .astylerc
)
