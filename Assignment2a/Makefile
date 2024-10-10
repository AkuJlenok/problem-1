run: main.o Array.o
	g++ main.o Array.o -o run

main.o: main.cpp
	g++ -c main.cpp

Array.o: Array.cpp Array.hpp
	g++ -c Array.cpp

clean:
	rm *.o run
