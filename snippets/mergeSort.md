---
title: Merge Sort
tags: Array
expertise: intermediate
cover: https://files.codingninjas.in/screenshot-87-6238.png
---

Merge Sort Algorithm -

- Merge Sort is a Divide and Conquer Algorithm.
- It divides the input array into two parts, until the size of input array is not '1'.
- In the return part, it will merge two sorted arrays a return a whole merged sorted array.

```cpp
#include<iostream>
using namespace std;

void merge(int* arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1= mid-s+1;
    int len2= e-mid;

    int* first= new int [len1];
    int* second= new int [len2];

    int mainIndex= s;

    for(int i=0;i<len1;i++){
        first[i]= arr[mainIndex++];
    }

    mainIndex=mid+1;

    for(int i=0;i<len2;i++){
        second[i]= arr[mainIndex++];
    }

    int index1=0;
    int index2=0;
    mainIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++]= first[index1++];
        }
        else{
            arr[mainIndex++]= second[index2++];
        }
    }

    while(index1<len1){
            arr[mainIndex++]= first[index1++];
    }
    while(index2<len2){
            arr[mainIndex++]= second[index2++];
    }

    delete []first;
    delete []second;


}

void mergeSort(int* arr, int s ,int e){
    if (s>=e)
    return;

    int mid=s+(e-s)/2;


    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

```

```cpp
    int arr[5]={2,5,4,8,1};
    int n=5;
```

```cpp

//function call
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

```
