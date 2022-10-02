---
title: Binary Search 
tags: Searching Algorithm
expertise: beginner
---

- Binary search is a mechanism used to find the given elements from the sorted array by continuously halving the array and then searching specified elements from a half array. 
- The process goes on till the match is found. 
- It works only the sorted data structures. 
- The time complexity of the binary search algorithm is O (log n).

```cpp
// CPP Program to demonstrate the implementation in binary search algorithm
#include <iostream>    
using namespace std;  
int main ()  
{   
    int arr[100], st, mid, end, i, num, tgt;  
      
    cout << " Define the size of the array: " << endl;  
    cin >> num;   
       
    cout << " Enter the values in sorted array either ascending or descending order: " << endl;  
 
    for (i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
      
    
    st = 0;  
    end = num - 1; 
    
    cout << "Enter the value to be searched: " << endl;  
    cin >> tgt;  
    
    while ( st <= end)  
    {  
        
        mid = ( st + end ) / 2;  
       
        if (arr[mid] == tgt)  
        {  
            cout << " Element is found at index " << (mid + 1);  
            exit (0); // use for exit program the program  
        }  
        
        else if ( tgt > arr[mid])  
        {  
            st = mid + 1; 
        }  
          
        else if ( tgt < arr[mid])  
        {  
            end = mid - 1;  
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
} 
```
