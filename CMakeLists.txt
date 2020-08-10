# CMakeList.txt: проект CMake для AcceleratedCpp; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

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
