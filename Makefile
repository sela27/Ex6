#!make -f

all: test
	./$<

demo: PolynomDemo.o Polynom.o
	clang++-5.0 -std=c++17 $^ -o demo

test: PolynomTest.o Polynom.o
	clang++-5.0 -std=c++17 $^ -o test

%.o: %.cpp
	clang++-5.0 -std=c++17 --compile $< -o $@

Polynom.o: Polynom.h

PolynomDemo.o: Polynom.h

PolynomTest.o: Polynom.h

clean:
	rm -f *.o demo test
