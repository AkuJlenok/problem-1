PROJECT = run

CXX = g++

CXXFLAGS = -I. -std=c++17 -Wall -Werror -Wpedantic -g -fPIC
TESTFLAGS = $< $(CXXFLAGS) -lgtest -lgtest_main -pthread

MAIN = main.cpp

$(PROJECT) : $(MAIN)
	$(CXX) -o $@ $< $(TESTFLAGS)

all: $(PROJECT)

clean:
	rm $(PROJECT)
