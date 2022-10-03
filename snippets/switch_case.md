---
title: Switch Case
tags: condition
expertise: beginner
---

- Switch case is like if-else statements and it's used is to perform different actions based on different conditions.
- In this program we will take an age variable of type integer and switch case to check if the given condition matches the case or not.
- The age variable have some value which will pass in switch case and if any case in matched then it will execute that case statement, and if none of the case matched then it will go to default condition and execute that statement.

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
  int age = 5;
  switch(age){
        case 18:
            cout << "You are 18";
            break;
        case 22:
            cout << "You are 22";
            break;
        case 90:
            cout << "You are 90";
            break;
        default:
            cout << "Not matched";
            break;        
   }

  return 0;
}
```