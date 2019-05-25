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

Polynom();
Polynom(const Polynom&);
Polynom& sort();
const Polynom operator + (const Polynom&) const;
Polynom& operator += (const Polynom&);
Polynom& operator -(const Polynom&);
Monom& remove(int);
bool contains(const Monom&);
const Polynom intersection(const Polynom&);
Monom& maxOfMonoms(const Polynom&);

friend ostream& operator<<(ostream& os, const Polynom& p);
friend istream& operator>> (istream& is, Polynom& p);

Polynom derivative();

};



}

