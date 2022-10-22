
project(calculator)

add_executable(calculator calculatormain.cpp calculator.h calculatorfunction.cpp)
add_library(calc STATIC calculator.h calculatorfunction.cpp)
