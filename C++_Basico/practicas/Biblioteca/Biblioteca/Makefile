CC = g++
CFLAGS = -Wall -g
Objects = main.o Biblioteca.o Libro.o Usuario.o
Libs = -lm

Salida		:	main.o Biblioteca.o Libro.o Usuario.o
			$(CC) -o Biblioteca $(Objects) $(Libs)
			rm main.o Biblioteca.o Libro.o Usuario.o

main.o		:	main.cpp Biblioteca.h
			$(CC) $(CFLAGS) -c main.cpp

Biblioteca.o	:	Biblioteca.cpp Biblioteca.h Usuario.h Libro.h
				$(CC) $(CFLAGS) -c Biblioteca.cpp

Libro.o	: Libro.cpp Libro.h
			$(CC) $(CFLAGS) -c Libro.cpp

Usuario.o	:	Usuario.cpp Usuario.h
			$(CC) $(CFLAGS) -c Usuario.cpp

clean	:
		rm Biblioteca