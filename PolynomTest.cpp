
#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "badkan.hpp"
#include "Polynom.h"
#include "Monom.h"
using ariel::Polynom, ariel::Monom;

int main() {
  badkan::TestCase testcase;
  int grade=0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0) {

    // BASIC TESTS - DO NOT CHANGE

      Polynom p0;   // 2 kilometers
      Polynom p1;
      Polynom p2;   // 2 kilometers
      Polynom p3;
      Monom m(1,2);
      istringstream input("1x^2+5x"); //init polynom
      input >> p0;
      istringstream input2("1x^2+6x"); //init polynom
      input2 >> p1;
      istringstream input3("1x^2+7x"); //init polynom
      input3 >> p2;
      istringstream input4("1x^2+8x"); //init polynom
      input4 >> p3;
    testcase
    .setname("Basic output")
    .CHECK_OUTPUT(p0, "1x^2+5x")
    .CHECK_OUTPUT(p1, "1x^2+6x")

    .setname("add")
    .CHECK_OUTPUT(p0+p1, "2x^2+11x")
    .CHECK_OUTPUT((p0+=p1), "2x^2+11x")
    .CHECK_OUTPUT(p0, "2x^2+11x")

    .setname("derivative")
    .CHECK_OUTPUT(p3.derivative() , "2x + 8")



    .setname("contains")
    .CHECK_EQUAL(p3.contains(m) , true)

    .setname("remove")
    .CHECK_OK(p3.remove(2))

    .setname("intersection")
    .CHECK_OK(p1.intersection(p2))

    .setname("max Monom")
    .CHECK_OK(p2.maxOfMonoms(p3))
    // YOUR TESTS - INSERT AS MANY AS YOU WANT

      .print(cout, /*show_grade=*/false);
      grade = testcase.grade();
    } else {
      testcase.print_signal(signal);
      grade = 0;
    }
    cout <<  "*** Grade: " << grade << " ***" << endl;
    return grade;
}
