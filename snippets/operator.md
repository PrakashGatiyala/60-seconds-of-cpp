---
title: operator
tags: mathematicaloperation
expertise: beginner
---

Explain briefly what the snippet does.
Including the iostream header file in our code. It will allow us to read from and write to the console.
Including the std namespace so as to use its classes and functions without calling it.
Calling the main() function inside which the logic of the program should be added. The { marks start of body of the main() function.
Declaring an integer variable a and initializing it to 11.
Declaring an integer variable b and initializing it to 5.
Declaring an integer variable c.
Printing value of operation a+b alongside other text on the console.
Printing value of operation a-b alongside other text on the console.
Printing value of operation a*b alongside other text on the console.
Printing value of operation a/b alongside other text on the console.
Printing value of operation a%b alongside other text on the console.
Printing value of operation a++ alongside other text on the console.
Printing value of operation a– alongside other text on the console.
The main() function should return an value if the program runs fine.
End of the body of the main() function.
```cpp
#include <iostream>
using namespace std;
int main() {
	int a = 11;
	int b = 5;
	int c;

	cout << "a + b is :" << a+b << endl; //11+5

	cout << "a - b is :" << a-b << endl; //11-5

	cout << "a * b is :" << a*b << endl; //11*5

	cout << "a / b is :" << a/b << endl; //11/5

	cout << "a % b is :" << a%b << endl; //11%5

	cout << "a++ is :" << a++ << endl; //11++

	cout << "a-- is :" << a-- << endl; //12--

	return 0;
}
```
