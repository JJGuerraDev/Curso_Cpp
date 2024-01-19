CC = g++
CFlags = -Wall -g
Objects = Biblioteca.o main.o Ciencias.o Fantacia.o SciFi.o Ingenieria.o 
Libs = -lm

Salida	:	main.o Biblioteca.o Ciencias.o Fantacia.o SciFi.o Ingenieria.o
		$(CC) -o Biblioteca $(Objects) $(Libs)
		rm main.o Biblioteca.o Ciencias.o Fantacia.o SciFi.o Ingenieria.o

main.o	:	main.cpp Biblioteca.h
		$(CC) $(CFlags) -c main.cpp

Fantacia.o	:	Fantacia.cpp Fantacia.h
		$(CC) $(CFlags) -c Fantacia.cpp

Ingenieria.o	:	Ingenieria.cpp Ingenieria.h
		$(CC) $(CFlags) -c Ingenieria.cpp

Ciencias.o	:	Ciencias.cpp Ciencias.h
		$(CC) $(CFlags) -c Ciencias.cpp

Biblioteca.o	:	Biblioteca.cpp Biblioteca.h
		$(CC) $(CFlags) -c Biblioteca.cpp

clear		:
		rm Biblioteca