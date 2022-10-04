---
title: Move all zeroes to end of an array
tags: DSA
expertise: intermediate
firstSeen: 2022-10-04
---


- Move all zeroes to end of an given array.

```cpp
#include <iostream>
using namespace std;
void MoveZeroestoEnd(int arr[],int n){
  int ind = 0;
  for(int i = 0;i < n; i++){
    if(arr[i] != 0){
      arr[ind++] = arr[i];
    }
  }
  while(ind < n){
    arr[ind++] = 0;
  }
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }
  MoveZeroestoEnd(arr,n);
  for(int i = 0;i < n;i++){
    cout << arr[i] <<" ";
  }
  return 0;

}
```
