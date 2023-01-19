
 BlackJackSim: Source.o Card.o
	g++ Source.o Card.o -o BlackJackSim
 Source.o: Source.cpp Card.h
	g++ -c Source.cpp
 Card.o: Card.h Card.cpp
	g++ -c Card.cpp
 clean:
	rm *.o BlackJackSim