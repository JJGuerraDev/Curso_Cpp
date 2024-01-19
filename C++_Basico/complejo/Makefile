CC = g++
CFLAGS = -Wall -g
OBJECTS = complejo.o main.o
LIBS = -lm

Salida		:	main.o complejo.o
			$(CC) -o Complejo $(OBJECTS) $(LIBS)
			rm main.o complejo.o

main.o		:	main.cpp complejo.h
			$(CC) $(CFLAGS) -c main.cpp

complejo.o	:	complejo.cpp complejo.h 
			$(CC) $(CFLAGS) -c complejo.cpp

clean		:
			rm Complejo
