CC = g++
CFLAGS = -c
 
all: main mylib.a

main: calculatormain.o mylib.a
	$(CC) calculatormain.o mylib.a -o calculator

calculatormain.o: calculatormain.cpp
	$(CC) $(CFLAGS) calculatormain.cpp

calculatorfunction.o:
	$(CC) $(CFLAGS) calculatorfunction.cpp

mylib.a: calculatorfunction.o
	ar -rcs mylib.a calculatorfunction.o

clean:
	rm -f *.o *.a calculator
