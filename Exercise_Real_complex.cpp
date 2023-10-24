//============================================================================
// Name        : Exercise_Real_complex.cpp
// Author      : Gabriella Keisha Andini
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Real.h"
#include "Complex.h"
using namespace std;

int main() {

	int studentNumber;

	//Pointers
	Real** realNumbers;
	Complex** complexNumbers;
	Complex* operations;

	do{
		cout << "Please insert your student number: ";
		cin >> studentNumber;
	}while(studentNumber <=0);

	if( studentNumber%3 ==0){
		cout<< "You have to provide 2 real numbers."<<endl;

		double a, b;

		cout << "Provide the first real number: ";
		cin >> a;

		cout << "Provide the second real number: ";
		cin >> b;

		//Array of pointers to Real
		realNumbers = new Real* [2];

		realNumbers[0] = new Real(a);
		realNumbers[1] = new Real(b);

		cout << "Sum of numbers "<< Real::sum(realNumbers[0], realNumbers[1])<< endl;
		cout << "Difference of numbers "<< Real::difference(realNumbers[0], realNumbers[1])<< endl;
		cout << "Product of numbers "<< Real::multiply(realNumbers[0], realNumbers[1])<< endl;
		cout << "Division of numbers "<< Real::divide(realNumbers[0], realNumbers[1])<< endl;

	}
	else if (studentNumber%3==1)
	{
		cout<< "You have to provide 2 complex numbers."<<endl;

		double aReal, aImag;
		double bReal, bImag;

		cout << "Provide the real part for the first number: ";
		cin >> aReal;

		cout << "Provide the imaginary part for the first number: ";
		cin >> aImag;

		cout << "Provide the real part for the second number: ";
		cin >> bReal;

		cout << "Provide the imaginary part for the second number: ";
		cin >> bImag;


		complexNumbers = new Complex* [2];

		complexNumbers[0] = new Complex(aReal,aImag);
		complexNumbers[1] = new Complex(bReal, bImag);

		operations = new Complex();

		Complex* sumComp = operations->sumComp(complexNumbers[0], complexNumbers[1]);

		cout<<"Sum of complex numbers is "<< sumComp->getReal()<<" +i"<<sumComp->getImag()<<endl;

		/* TO BE CONTINUED */


	}
	else{

		/* TO BE CONTINUED */

	}




	if(studentNumber%3==0){

		delete [] realNumbers;
	}

	else if(studentNumber%3==1)
	{
		delete [] complexNumbers;

		delete operations;


	}
	else{

		/* TO BE CONTINUED */

	}




	return 0;
}
