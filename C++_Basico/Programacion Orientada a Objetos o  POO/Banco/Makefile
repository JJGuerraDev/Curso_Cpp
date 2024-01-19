CC = g++
CFLAGS = -Wall -g
OBJECTS= Personal.o main.o
LIBS= -lm

Salida  : Personal.o main.o
		$(CC) -o Personal $(OBJECTS) $(LIBS)
		rm main.o Personal.o

Main.0  : main.cpp Personal.h
		$(CC) $(CFLAGS) -c main.cpp

Personal.o :Personal.cpp Personal.h
			$(CC) $(CFLAGS) -c Personal.cpp

clean   :
		rm Personal		   
