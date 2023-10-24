/*
 * Real.cpp
 *
 *  Created on: 21 Mar 2023
 *    
 */

#include "Real.h"
#include <iostream>

using namespace std;

Real::Real() {
	// TODO Auto-generated constructor stub

}

Real::Real(double realIn)
:real(realIn)
{

}

double Real::getReal() const
{
	return real;
}

double Real::sum(Real* a, Real* b)
{
	return (a->getReal() + b->getReal());
}

double Real::difference(Real* a, Real* b)
{
	return (a->getReal() -  b->getReal());
}

double Real::multiply(Real* a, Real* b)
{
	return ( a->getReal() * b->getReal() );
}

double Real::divide(Real* a, Real* b)
{
	if( b->getReal() == 0)
	{
		cout << "Denominator is equal to 0. Impossible to divide "<<a->getReal()<<" by zero"<<endl;
		cout << "Program aborted..."<<endl;
		assert(false);
	}
	else
	{
		return( a->getReal() / b->getReal());
	}
}

Real::~Real() {
	// TODO Auto-generated destructor stub
}

