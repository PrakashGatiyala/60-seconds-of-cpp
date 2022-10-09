---
title: Even or odd
tags: Maths
Expertise: Beginner
---

This C++ program checks whether the given number is even or odd.
Even numbers are perfectly divisible by 2. In this program, if else statement is used to check whether a number entered by the user is even or odd.

```cpp
#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter the number: "; cin >> a;
  /* logic */

  if (a % 2 == 0) {
    cout << "The given number is EVEN" << endl;
  } else {
    cout << "The given number is ODD" << endl;
  }
  return 0;
}