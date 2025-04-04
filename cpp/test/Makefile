CXX = g++
PATH_PERCEPTION = ../perception
PATH_NAVIGATION = ../navigation

all: test_perception test_navigation

COMPILE_TARGETS_PER_1 = $(PATH_PERCEPTION)/mainfunc.cpp

test_perception: test_perception.cpp
	$(CXX) -I $(PATH_PERCEPTION) $(COMPILE_TARGETS_PER_1) test_perception.cpp -o test_perception

COMPILE_TARGETS_NAV_1 = $(PATH_NAVIGATION)/sample.cpp

test_navigation: test_navigation.cpp
	$(CXX) -I $(PATH_NAVIGATION) $(COMPILE_TARGETS_NAV_1) test_navigation.cpp -o test_navigation
