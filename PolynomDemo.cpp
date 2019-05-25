#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "Polynom.h"
//#include "Monom.h"
using ariel::Polynom, ariel::Monom;

int main() {
  try {
    Polynom p0();   // 2 kilometers
    Polynom p1();  // 300 meters
    cout << p0 << endl;   // Prints "2[km]"
    cout << p1 << endl;
    cout << (p0 + p1) << endl;   // Prints "2.3[km]"
    cout << (p1 - p0) << endl;   // Prints "-1700[m]"
    //cout << (-a) << endl;   // Prints "-2[km]"
    /*
    cout << boolalpha; // print booleans as strings from now on:
    cout << (a>b) << endl;  // Prints "true"
    cout << (a<=b) << endl;  // Prints "false"
    cout << (a==PhysicalNumber(2000, Unit::M)) << endl;  // Prints "true"
    */


    istringstream input("700[kg]"); //init polynom
    input >> a;
    cout << a << endl;   // Prints "700[kg]"
    cout << (a += PhysicalNumber(1, Unit::TON)) << endl;  // prints "1700[kg]"
    cout << a << endl;   // Prints "1700[kg]" since a has changed.

    try {
      cout << (a+b) << endl;
    } catch (const std::exception& ex) {
      cout << ex.what() << endl; // Prints "Units do not match - [m] cannot be converted to [kg]"
    }
  } catch (...) {
    cout << "Unexpected exception!" << endl;
  }
  return 0;
}
