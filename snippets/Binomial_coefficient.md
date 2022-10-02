---
title: Binomial Coefficent
tags: Maths
expertise: easy
---
# Binomial Coefficient 

Simple recursive implementation 

- A binomial coefficient C(n, k) can be defined as the coefficient of x^k in the expansion of (1 + x)^n.
- For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.
```cpp
int binomialCoeff(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}
```