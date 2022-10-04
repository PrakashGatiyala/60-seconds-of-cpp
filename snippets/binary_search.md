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


```cpp


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l=0,u=n-1,mid;
        while(l<=u){
            mid=(u+l)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(k>arr[mid]){
                l++;
            }
            else{
                u--;
            }
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

```
