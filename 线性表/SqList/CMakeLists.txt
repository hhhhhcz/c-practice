cmake_minimum_required(VERSION 3.10)  # 建议改为更常用的版本

project(SqList C)

set(CMAKE_C_STANDARD 99)

add_executable(SqList
        main.c
        SqList.c    # 添加此行以包含函数实现文件
)
