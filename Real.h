/*
 * Real.h
 *
 *  Created on: 21 Mar 2023
 *  
 */

#ifndef REAL_H_
#define REAL_H_

#include <cassert>

class Real {
private:
	double real;
public:
	Real();
	Real(double realIn);
	double getReal() const;

	static double sum(Real* a, Real* b);
	static double difference(Real* a, Real* b);
	static double multiply(Real* a , Real* b);
	static double divide(Real* a, Real *b);
	virtual ~Real();
};

#endif /* REAL_H_ */
