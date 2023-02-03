main.exe: main.o converter.o
	g++ main.o converter.o -o main

main.o: main.cpp
	g++ -c main.cpp

converter.o: converter.cpp
	g++ -c converter.cpp

clean:
	rm *.o main.exe