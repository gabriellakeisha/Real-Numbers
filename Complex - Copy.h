/*
 * Complex.h
 *
 *  Created on: 21 Mar 2023
 *      
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include "Real.h"



class Complex: public Real {

Complex* sumComplex;
Complex* diffComplex;
Complex* multComplex;
Complex* divComplex;

private:
	double imag;
public:
	Complex();
	Complex(double realIn, double imagIn);
	double getReal() const;
	double getImag() const;
	Complex* sumComp(Complex* a, Complex* b);
	Complex* difference(Complex* a, Complex* b);
	Complex* multiply(Complex* a , Complex* b);
	Complex* divide(Complex* a, Complex *b);
	virtual ~Complex();
};

#endif /* COMPLEX_H_ */
