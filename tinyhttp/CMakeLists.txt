
cmake_minimum_required (VERSION 2.6)
project (tinyhttp)


add_executable(tinyhttp server.c csapp.c)


TARGET_LINK_LIBRARIES(cmakentop pthread) #添加额外的pthread库
