cmake_minimum_required(VERSION 3.12)
project(ZlatopolskyPractice)

add_subdirectory(Task_1.62)
add_subdirectory(Task_2.43)
add_subdirectory(Task_3.35)
add_subdirectory(Task_4.141)
add_subdirectory(Task_5.96)
add_subdirectory(Task_6.87)
add_subdirectory(Task_7.128)
add_subdirectory(Task_8.59)
add_subdirectory(Task_9.187)

add_custom_target(ProjectRelatedFiles SOURCES
    .gitignore
    .astylerc
)
