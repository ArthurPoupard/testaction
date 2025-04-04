CXX = g++
PATH_PERCEPTION = ../perception
PATH_NAVIGATION = ../navigation

all: test_perception test_navigation

test_perception: test_perception.cpp
	$(CXX) -I $(PATH_PERCEPTION) $(PATH_PERCEPTION)/*.cpp test_perception.cpp -o test_perception

test_navigation: test_navigation.cpp
	$(CXX) -I $(PATH_NAVIGATION) $(PATH_NAVIGATION)/*.cpp test_navigation.cpp -o test_navigation
