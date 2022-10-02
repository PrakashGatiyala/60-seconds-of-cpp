---
title: Factorial Using Recursion
tags: Maths
expertise: beginner
---

- Let us see how this program works:

In the below program, suppose the user inputs a number 6. The number is passed to the factorial() function.

In this function, 6 is multiplied to the factorial of (6 - 1 = 5). For this, the number 5 is passed again to the factorial() function.
Likewise in the next iteration, 5 is multiplied to the factorial of (5 - 1 = 4). And, 4 is passed to the factorial() function.

This continues until the value reaches 1 and the function returns 1.
Now, each function returns the value back to compute 1 * 2 * 3 * 4 * 5 * 6 = 720, which is returned to the main() function.
```cpp

#include<iostream>
using namespace std;

int factorial(int n);
int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

  return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}