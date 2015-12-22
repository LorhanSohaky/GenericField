all:GenericField Main.exe

GenericField:../src/GenericField.c ../src/GenericField.h
	gcc -c ../src/GenericField.c -I../src/

main.o:main.c ../src/GenericField.h
	gcc -c main.c -I../src

Main.exe:main.o GenericField.o
	gcc -Wall -o Main.exe main.o GenericField.o

clean:
	rm -rf *.o
