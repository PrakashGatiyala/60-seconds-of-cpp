---
title: Count the Set-Bit of an number
tags: bitwise
expertise: intermediate

---


```cpp
int setbit_Count(int NUM){
    int count=0;
    while(NUM>0){
        count+=(NUM&1);
        NUM=NUM>>1;
    }
return count;
}

```

```cpp
int NUM = 10;
// Function call
cout << setbit_Count(NUM) << endl;
```
