---
title: Arrayfunction
tags: passingarray
expertise: beginner
---

Explain briefly what the snippet does.

In C++, to reuse the array logic, we can create function. To pass array to function in C++, we need to provide only array name.

functionname(arrayname);

```cpp
#include <iostream>  
using namespace std;  
void  printMin(int arr[5]);  
int main()  
{  
   int arr1[5] = { 30, 10, 20, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printMin(arr1);//passing array to function    
         printMin(arr2);  
}  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
        for (int i = 0; i > 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "Minimum element is: "<< min <<"\n";    
}  
```cpp
