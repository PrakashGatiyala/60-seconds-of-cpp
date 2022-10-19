---
title: HCF of Two Numbers
tags: Math
expertise: beginner
---

- This program takes two numbers and returns the HCF of those two numbers.
- HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
- Ex : HCF of 20 and 28 is 4

```cpp
// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return hcf of a and b
int hcf(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return hcf(a-b, b);
    return hcf(a, b-a);
}
  
// Program to test the above function
int main()
{
    int a, b;
    cout << "Provide value for a : ";
    cin >> a;
    cout << "Provide value for b : ";
    cin >> b;
    cout << "HCF of " << a << " and " << b << " is " << hcf(a, b);
    return 0;
}
```
