run: main.o Polski.o
	g++ main.o Polski.o -o run

main.o: main.cpp
	g++ -c main.cpp

Array.o: Polski.cpp Polski.hpp
	g++ -c Polski.cpp

clean:
	rm *.o run 
