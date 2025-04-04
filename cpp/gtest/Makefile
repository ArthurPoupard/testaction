CXX = g++
PATH_PERCEPTION = ../perception
PATH_NAVIGATION = ../navigation

all: gtestnav

COMPILE_TARGETS_PER_1 = $(PATH_PERCEPTION)/mainfunc.cpp

gtestnav: gtestnav.cpp
	$(CXX) -I $(PATH_PERCEPTION) $(COMPILE_TARGETS_PER_1) gtestnav.cpp -o gtestnav
