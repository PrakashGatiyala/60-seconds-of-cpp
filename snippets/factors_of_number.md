---
title: Factors of number
tags: Maths
expertise: beginner
---

- Program to Display Factors of a Number 

Let us see how this program works:

In this program, an integer entered by user is stored in variable n.

Then, for loop is executed with an initial condition i = 1 and checked whether n is perfectly divisible by i or not. If n is perfectly divisible by i then, i will be the factor of n.

In each iteration, the value of i is updated (increased by 1).
This process goes until test condition i <= n becomes false,i.e., this program checks whether number entered by user n is perfectly divisible by all numbers from 1 to n and all displays factors of that number.

```cpp

#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}