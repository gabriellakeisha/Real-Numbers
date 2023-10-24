/*
 * Complex.cpp
 *
 *  Created on: 21 Mar 2023
 *      
 */

#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

Complex::Complex() {
	// TODO Auto-generated constructor stub

}

Complex::Complex(double realIn, double imagIn)
:Real::Real(realIn), imag(imagIn)
{

}

double Complex::getReal() const
{
	return Real::getReal();
}

double Complex::getImag() const
{
	return imag;
}

Complex* Complex::sumComp(Complex* a, Complex* b)
{
	sumComplex = new Complex(a->getReal() + b->getReal(), a->getImag() + b->getImag());
	return sumComplex;
}

Complex* Complex::difference(Complex* a, Complex* b)
{
	diffComplex = new Complex(a->getReal() - b->getReal(), a->getImag() - b->getImag());
	return diffComplex;
}

Complex* Complex::multiply(Complex* a, Complex*b)
{
	double newReal = a->getReal()*b->getReal() - a->getImag()*b->getImag();
	double newImag = a->getReal()*b->getImag() + a->getImag()*b->getReal();

	multComplex = new Complex(newReal,newImag);

	return multComplex;
}

Complex* Complex::divide(Complex* a, Complex*b)
{
	double newReal = a->getReal()*b->getReal() + a->getImag()*b->getImag();
	double newImag = a->getReal()*b->getImag() - a->getImag()*b->getReal();

	double denom = pow(b->getReal(), 2) + pow(b->getImag(),2);

	if(denom == 0)
	{
		cout << "Denominator is equal to 0. Impossible to divide "<<a->getReal()<<" by zero"<<endl;
		cout << "Program aborted..."<<endl;
		assert(false);
	}

	divComplex = new Complex(newReal,newImag);

	return divComplex;

}



Complex::~Complex() {
	// TODO Auto-generated destructor stub
	delete sumComplex;
	delete diffComplex;
	delete multComplex;
	delete divComplex;
}

