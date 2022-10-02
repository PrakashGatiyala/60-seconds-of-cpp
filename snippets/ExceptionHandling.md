---
title: exceptionhandling
tags: exception
expertise: beginner
---

Explain briefly what the snippet does.

In C++, we use 3 keywords to perform exception handling:

-try
-catch, and
-throw

```cpp
#include <iostream>  
using namespace std;  
float division(int x, int y) {  
   return (x/y);  
}  
int main () {  
   int i = 50;  
   int j = 0;  
   float k = 0;  
      k = division(i, j);  
      cout << k << endl;  
   return 0;  
}  
```
