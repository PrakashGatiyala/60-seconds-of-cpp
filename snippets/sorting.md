---
title: Sorting
tags: Array
expertise: beginner
---

- Sort the array in ascending as well as descending order.
- In this program we will use inbuilt sort function with a compare function.
- Compare function is taken when we have to sort the aaray in descending order.

```cpp
#include<bits/stdc++.h>
using namespace std;

bool compare(int num1, int num2) {
    return num1 > num2;
}

int main() {
  int arr[] = {8, 3, 7, 2, 19, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, arr+size, compare);

  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }

  return 0;
}
```