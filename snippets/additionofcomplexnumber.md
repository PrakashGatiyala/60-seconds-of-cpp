---
title:Complex Number addition
tags: Addition
expertise:Beginner
---

Complex Number Addition Algorithm

-Complex numbers are the numbers that are expressed in the form of a+ib where, a,b are real numbers and  ‘i’ is an imaginary number called “iota”. The value of i = (√-1). For example, 2+3i is a complex number, where 2 is a real number (Re) and 3i is an imaginary number (Im). 

- Time Complexity:O(1)

```cpp

// C++ Program to Add Two Complex Numbers

// Importing all libraries
#include<bits/stdc++.h>
using namespace std;

// User Defined Complex class
class Complex {

	// Declaring variables
	public:
		int real, imaginary;

	// Constructor to accept
	// real and imaginary part
	Complex(int tempReal = 0, int tempImaginary = 0)
	{
		real = tempReal;
		imaginary = tempImaginary;
	}

	// Defining addComp() method
	// for adding two complex number
	Complex addComp(Complex C1, Complex C2)
	{
		// creating temporary variable
		Complex temp;

		// adding real part of complex numbers
		temp.real = C1.real + C2.real;

		// adding Imaginary part of complex numbers
		temp.imaginary = C1.imaginary + C2.imaginary;

		// returning the sum
		return temp;
	}
};

// Main Class
int main()
{

	// First Complex number
	Complex C1(3, 2);

	// printing first complex number
	cout<<"Complex number 1 : "<< C1.real
				<< " + i"<< C1.imaginary<<endl;

	// Second Complex number
	Complex C2(9, 5);

	// printing second complex number
	cout<<"Complex number 2 : "<< C2.real
				<< " + i"<< C2.imaginary<<endl;

	// for Storing the sum
	Complex C3;

	// calling addComp() method
	C3 = C3.addComp(C1, C2);

	// printing the sum
	cout<<"Sum of complex number : "
					<< C3.real << " + i"
					<< C3.imaginary;
}

// This code is contributed by chitranayal
