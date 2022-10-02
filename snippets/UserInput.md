---
title: User Input
tags: String
expertise: beginner
---

- Take name as a input from user.
- This program takes name from the user and wish Good Morning to the user.

```cpp

#include<iostream>
using namespace std;
int main()
{
    char str[30];
    cout<<"Enter Your Name: ";
    cin>>str;
    cout<<"\nGood Morning! "<<str;
    cout<<endl;
    return 0;
}
