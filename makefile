main.exe: main.o converter.o
	g++ -g main.o converter.o -o main

main.o: main.cpp
	g++ -g -c main.cpp

converter.o: converter.cpp
	g++ -g -c converter.cpp

clean:
	rm *.o main.exe