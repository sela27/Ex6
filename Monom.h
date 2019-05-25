#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

namespace ariel {

	class Monom
	{
		double _coefficent;
		int _power;
	public:
		Monom(double coefficent , int power)
		{
			this->_coefficent = coefficent;
			this->_power = power;
		}
	};

}