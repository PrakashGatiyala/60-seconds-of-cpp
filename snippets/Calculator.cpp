// basic calculator program in cpp
#include <iostream>
#include <math.h>
using namespace std;

// Class calculation
class Calculation
{
float a, b;
public:

	// take input from user
	void result()
	{
		cout << "Enter First Number: ";
		cin >> a;
		cout << "Enter Second Number: ";
		cin >> b;
	}

	// Function for addition
	float add()
	{
		return a + b;
	}

	// Function for substraction
	float sub()
	{
		return a - b;
	}

	// Function for multiplication
	float mul()
	{
		return a * b;
	}

	// Function for division
	float div()
	{
		if (b == 0)
		{
			cout << "Division By Zero" <<
					endl;
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}
};

// Main function
int main()
{
	int ch;
	Calculation c;
	cout << "Enter 1 For addition" <<
			"\nEnter 2 for Subtraction" <<
			"\nEnter 3 for Multiplication " <<
			"\nEnter 4 for Division" <<
			"\nEnter 0 To Exit";
		
	do
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			// Called result
			c.result();	
			
			// Add function for addition
			cout << "Result: " <<
					c.add() << endl;
			break;
		case 2:
			
			// Add function for substraction
			c.result();
			cout << "Result: " <<
					c.sub() << endl;
			break;
		case 3:
			c.result();
			
			// Add function for multiplication
			cout << "Result: " <<
					c.mul() << endl;
			break;
		case 4:
			c.result();
			
			// Add function for division
			cout << "Result: " <<
					c.div() << endl;
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}
