#!make -f

all: test
	./$<

#demo: PolynomDemo.o Polynom.o
#	clang++-5.0 -std=c++17 $^ -o demo


demo:
	clang++-5.0 -std=c++17 Polynom.h Monom.h PolynomDemo.cpp


test: PolynomTest.o Polynom.o
	clang++-5.0 -std=c++17 $^ -o test

%.o: %.cpp
	clang++-5.0 -std=c++17 --compile $< -o $@

Polynom.o: Polynom.h Monom.h

PolynomDemo.o: PolynomDemo.cpp Polynom.h Monom.h

PolynomTest.o: Polynom.h

clean:
	rm -f *.o demo test
