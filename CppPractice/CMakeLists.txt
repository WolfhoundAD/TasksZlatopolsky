cmake_minimum_required(VERSION 3.14)
project(CppPractice LANGUAGES CXX)

add_subdirectory (Chapter1/)
add_subdirectory (Chapter2/)
add_subdirectory (Chapter3/)
add_subdirectory (Chapter4/)
add_subdirectory (Chapter5/)
add_subdirectory (Chapter6/)
add_subdirectory (Chapter7/)
add_subdirectory (Chapter8/)
add_subdirectory (Chapter9/)
add_subdirectory (Chapter10/)
add_subdirectory (Chapter11/)
add_subdirectory (Chapter12/)
add_subdirectory (Chapter13/)
add_subdirectory (Chapter14/)
add_subdirectory (Chapter15/)
add_subdirectory (Chapter16/)
add_subdirectory (Chapter17/)

add_custom_target(ProjectRelatedFiles SOURCES
    .gitignore
    .astylerc
)
