---
title: Factorial of a Number
tags: C++
expertise: Basic
firstSeen: 2022-10-05
---
The factorial of a number is the product of all the integers from 1 up to that number. The factorial can only be defined for positive integers.

The factorial of a negative number doesn't exist.

7!= 1 × 2 × 3 × 4 × 5 × 6 × 7

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long fact = 1;
    cout <<"Enter a positive integer: ";
    cin >> n;
    if (n<0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact;    
    }

    return 0;
}
```

