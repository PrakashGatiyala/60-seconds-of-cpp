---
title: insertion sort
tags: sorting technique
expertise: intermediate
---

insertion sort is a sorting technique used to sort the input given.
- Time complexity : O(n2)
- Space complexity : O(1)

```cpp
#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void insertionSort(int *arr, int n) {
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1],  
        // that are greater than key, to one 
        // position ahead of their 
        // current position

        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
```
