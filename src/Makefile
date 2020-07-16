echoes: Echoes.o main.o
	g++ -o echoes Echoes.o main.o

echoes.o: Echoes.cpp Echoes.h	
	g++ -Wall -c Echoes.cpp
	
main.o: main.cpp
	g++ -Wall -c main.cpp
	
clean:
	rm -f *.o

mrproper: clean
	rm -f echoes
