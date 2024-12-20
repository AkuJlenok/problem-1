PROJECT = test-run

SRC = test-run.cpp

CXX = g++

CXXFLAGS = -I. -std=c++17 -Wpedantic -Wall -g -fPIC
TESTFLAGS = $(CXXFLAGS) -lgtest_main -lgtest -lpthread

$(PROJECT): $(SRC)
	$(CXX) -o $@ $^ $(TESTFLAGS)

all: $(PROJECT)


clean:
	rm -f $(PROJECT)
