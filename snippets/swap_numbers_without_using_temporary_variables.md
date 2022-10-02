

---
title: Swap Numbers Without Using Temporary Variables
tags: Coding-Question
expertise: beginner
---



Logic to swap number using temporary variable:

In this program, we are writing code that will swap numbers without using other variable.

To swap numbers:
Step 1) Add the value of a and b and assign the result in a.
a = a+b;
Step 2) To get the swapped value of b: Subtract the value of b from a (which was the sum of a and b).
b = a-b;
Step 3) To get the swapped value of a: Subtract the value of b from a.
a = a-b;

```cpp



#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}









