CXX = g++
PATH_PERCEPTION = ../perception
PATH_NAVIGATION = ../navigation

all: test_perception test_navigation

COMPILE_TARGETS = $(PATH_PERCEPTION)/mainfunc.cpp

test_perception: test_perception.cpp
	$(CXX) -I $(PATH_PERCEPTION) $(COMPILE_TARGETS) test_perception.cpp -o test_perception

test_navigation: test_navigation.cpp
	$(CXX) -I $(PATH_NAVIGATION) $(PATH_NAVIGATION)/*.cpp test_navigation.cpp -o test_navigation
