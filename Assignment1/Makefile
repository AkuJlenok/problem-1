output: main.o Hello.o
	g++ main.o Hello.o -o output

main.o: main.cpp
	g++ -c main.cpp

Hello.o: Hello.cpp Hello.hpp
	g++ -c Hello.cpp

clean:
	rm *.o output
