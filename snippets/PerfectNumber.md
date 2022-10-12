---
title: Perfect Number
tags: Number, Number system
expertise: beginner
---

Program to check whether a number is perfect or not.

- C++ program is used to find the perfect number of a positive number and find its all positive divisors excluding that number.

```cpp
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"ENTER A NUMBER: ";
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<"PERFECT NUMBER.";
	}
	else
	{
		cout<<"NOT PERFECT NUMBER.";
	}
}
