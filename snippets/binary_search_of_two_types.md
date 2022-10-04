---
title: Binary Search
tags: c++
expertise: basic
firstSeen: 2022-10-04
---
Binary Search Algorithm can be implemented in the following two ways

Iterative Method
Recursive Method

Binary Search Algorithm: The basic steps to perform Binary Search are:

* Begin with the mid element of the whole array as a search key.
* If the value of the search key is equal to the item then return an index of the search key.
* Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
* Otherwise, narrow it to the upper half.
* Repeatedly check from the second point until the value is found or the interval is empty.

Iteration Method

    binarySearch(arr, x, low, high)
        repeat till low = high
               mid = (low + high)/2
                   if (x == arr[mid])
                   return mid

                   else if (x > arr[mid]) // x is on the right side
                       low = mid + 1

                   else                  // x is on the left side
                       high = mid - 1


Recursive Method

    binarySearch(arr, x, low, high)
           if low > high
               return False

           else
               mid = (low + high) / 2
                   if x == arr[mid]
                   return mid

               else if x > arr[mid]        // x is on the right side
                   return binarySearch(arr, x, mid + 1, high)

               else                        // x is on the right side
                   return binarySearch(arr, x, low, mid - 1)

Code for Binary Search in c++

```cpp 

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x){
      return mid;
    }
    if (array[mid] < x){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array)/sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at the index %d", result);
    return 0;
}

```
