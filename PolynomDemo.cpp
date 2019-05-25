#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "Polynom.h"
#include "Monom.h"
using ariel::Polynom, ariel::Monom;
//using namespace ariel;

int main() {
  try {
    Polynom p0;   // 2 kilometers
    Polynom p1;  // 300 meters

    cout << p0 << endl;   // Prints "2[km]"
    cout << p1 << endl;

    cout << (p0 + p1) << endl;   // Prints "2.3[km]"

    cout << (p1 - p0) << endl;   // Prints "-1700[m]"

    /*
    cout << boolalpha; // print booleans as strings from now on:
    cout << (a>b) << endl;  // Prints "true"
    cout << (a<=b) << endl;  // Prints "false"
    cout << (a==PhysicalNumber(2000, Unit::M)) << endl;  // Prints "true"
    */


    istringstream input("1x^2+5x"); //init polynom
    input >> p0;

    cout << p0 << endl;   // Prints "700[kg]"

    cout << p0.derivative() << endl;

    cout << (p0 += Polynom(p0)) << endl;  // prints "1700[kg]"
    cout << p0 << endl;   // Prints "1700[kg]" since a has changed.

    p0.sort();
    std::cout << "sort :"  << p0 << '\n';

    Monom m0(1.0 , 2) ;
    bool b = p0.contains(m0);
    /*
    try {
      cout << (a+b) << endl;
    } catch (const std::exception& ex) {
      cout << ex.what() << endl; // Prints "Units do not match - [m] cannot be converted to [kg]"
    }
    */
  }
   catch (...) {
    cout << "Unexpected exception!" << endl;
  }


  return 0;
}
