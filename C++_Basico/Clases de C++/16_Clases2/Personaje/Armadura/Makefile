CC = g++
CFlags = -Wall -g
Objects_1 = Armadura.o main.o
Libs = -lm

Salida	:	main.o Armadura.o
		$(CC) -o Armadura $(Objects_1) $(Libs)
		rm main.o Armadura.o

main.o	:	main.cpp Armadura.h
		$(CC) $(CFlags) -c main.cpp

Armadura.o	:	Armadura.cpp Armadura.h
		$(CC) $(CFlags) -c Armadura.cpp

clear		:
		rm Armadura