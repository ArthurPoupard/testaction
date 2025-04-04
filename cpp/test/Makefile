CXX = g++
PATH_TO_TESTED_FILES_1 = ../functions/mainfunc.cpp

all: test2 test1

test1: test_premier.cpp
	$(CXX) -I ../functions *.cpp test_premier.cpp -o test1

test2: test_autre.cpp
	$(CXX) test_autre.cpp -o test2
