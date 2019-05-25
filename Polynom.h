#include <iostream>
#include <stdexcept>
#include <string>
#include "Monom.h"
#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <list>
#include <deque>
#include <map>


using namespace std;

namespace ariel{


//class Polynom
/*
    constructor and copy constructor


    permutations:
          sorting by high power

    arithmetics:
      operators + and -

    queries and structure changes :
      remove by power or range of powers

    Runes:
      contains

    set algorithms :
      the intersection of two polynoms
      the max monom of two polynoms

    istream & ostream :
      input & output operators

    transform:
      derivative

 */

class Polynom {

public:
Polynom(){}
Polynom(const Polynom&){}
Polynom& sort(){return *this;}
const Polynom operator+(const Polynom& p1) const
{return *this;}
const Polynom& operator += (const Polynom& p){return p;}
Polynom& operator -(const Polynom& p){ return *this;}
Monom& remove(int) {Monom m(0.0,0);
  return m;}
bool contains(const Monom&) {return false;}
const Polynom intersection(const Polynom& p) {return p;}
Monom& maxOfMonoms(const Polynom&) {Monom m(0.0,0);
  return m;}

friend ostream& operator<<(ostream& os, const Polynom& p){return os;}
friend istream& operator>> (istream& is, Polynom& p) {return is;}

Polynom derivative() {return *this;}

};



}
