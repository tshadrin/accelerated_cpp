# CMakeList.txt: проект CMake для AcceleratedCpp; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)

#add_executable (exercise01 "chapter00/0.1.cpp")
#add_executable (exercise02 "chapter00/0.2.cpp")
#add_executable (exercise03  "chapter00/0.3.cpp")
#add_executable (exercise04  "chapter00/0.4.cpp")
#add_executable (exercise05  "chapter00/0.5.cpp")
#add_executable (exercise06  "chapter00/0.6.cpp")
#add_executable (exercise07  "chapter00/0.7.cpp")
#add_executable (exercise08  "chapter00/0.8.cpp")
#add_executable (exercise09  "chapter00/0.9.cpp")
#add_executable (exercise10  "chapter00/0.10.cpp")
#add_executable (exercise11 "chapter01/1.1.cpp")
#add_executable (exercise12 "chapter01/1.2.cpp")
#add_executable (exercise13  "chapter01/1.3.cpp")
#add_executable (exercise14  "chapter01/1.4.cpp")
#add_executable (exercise141  "chapter01/1.4.1.cpp")
#add_executable (exercise15 "chapter01/1.5.cpp")
#add_executable (exercise151  "chapter01/1.5.1.cpp")
#add_executable (exercise16  "chapter01/1.6.cpp")
#add_executable (listing11  "chapter01/l1.1.cpp")
#add_executable (listing12  "chapter01/l1.2.cpp")


# Добавьте источник в исполняемый файл этого проекта.
add_executable (exercise301 "chapter03/exercise301.cpp")
add_executable (exercise302 "chapter03/exercise302.cpp")
add_executable (exercise32   "chapter03/exercise32.cpp")
add_executable (exercise33   "chapter03/exercise33.cpp")
add_executable (exercise34   "chapter03/exercise34.cpp")
add_executable (exercise35   "chapter03/exercise35.cpp")
add_executable (exercise36   "chapter03/exercise36.cpp")

add_executable (exercise40 "chapter04/listing01/main.cpp" "chapter04/listing01/grade.cpp" "chapter04/listing01/median.cpp" "chapter04/listing01/Student_info.cpp")
add_executable (exercise41 "chapter04/exercise41.cpp" "chapter04/listing01/Student_info.cpp")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
