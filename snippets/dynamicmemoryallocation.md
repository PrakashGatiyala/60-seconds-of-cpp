---
title: memoryallocation
tags: memory
expertise: beginner
---

Explain briefly what the snippet does.

=Memory allocation

-Reserving or providing space to a variable is called memory allocation. For storing the data, memory allocation can be done in two ways -

-Static allocation or compile-time allocation - Static memory allocation means providing space for the variable. The size and data type of the variable is known, and it remains constant throughout the program.
-Dynamic allocation or run-time allocation - The allocation in which memory is allocated dynamically. In this type of allocation, the exact size of the variable is not known in advance. Pointers play a major role in dynamic memory allocation.

```cpp
// The program will show the use of new and delete  
#include <iostream>  
using namespace std;  
int main ()  
{  
    // Pointer initialization to null  
    int* m = NULL;  
  
    // Request memory for the variable  
    // using new operator  
    m = new(nothrow) int;  
    if (!m)  
        cout<< "allocation of memory failed\n";  
    else  
    {  
        // Store value at allocated address  
        *m=29;  
        cout<< "Value of m: " << *m <<endl;  
    }  
    // Request block of memory  
    // using new operator  
    float *f = new float(75.25);  
    cout<< "Value of f: " << *f <<endl;  
    // Request block of memory of size   
    int size = 5;  
    int *arr = new(nothrow) int[size];  
    if (!arr)  
        cout<< "allocation of memory failed\n";  
    else  
    {  
        for (int i = 0; i< size; i++)  
            arr[i] = i+1;  
  
        cout<< "Value store in block of memory: ";  
        for (int i = 0; i< size; i++)  
            cout<<arr[i] << " ";  
    }  
  
    // freed the allocated memory  
    delete m;  
    delete f;  
    // freed the block of allocated memory  
    delete[] arr;  
  
    return 0;  
}  
```
