CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Main.o Date.o Employee.o Programmer.o SoftwareArchitect.o
FILES = Main.cpp Header.h Date.h Date.cpp Employee.h Employee.cpp Programmer.h Programmer.cpp SoftwareArchitect.h SoftwareArchitect.cpp

all: Hw4

Hw4: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o Hw4

Main.o: Main.cpp Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) -c Main.cpp

Programmer.o: Programmer.cpp Programmer.h Employee.o
	$(CC) $(FLAGS) -c Programmer.cpp

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h Employee.o
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp

Employee.o: Employee.cpp Employee.h Date.o Programmer.o
	$(CC) $(FLAGS) -c Employee.cpp

Date.o: Date.h Date.cpp Header.h
	$(CC) $(FLAGS) -c Date.cpp

tar:
	tar -cf Hw3.tar Hw3.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr Hw3

sudoClean:
	rm *.o *.scr Hw3