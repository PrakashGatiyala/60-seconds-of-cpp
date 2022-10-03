title	: reverse an integer
tags: maths
expertise: beginner

>>> reversing an integer
>>> range can be -2^31 <= x <= 2^31 - 1
>>> If by reversing x,the value goes outside the signed 32-bit integer range [-2^31, 2^31 - 1]
>>then return 0.
```cpp


#include <bits/stdc++.h>
using namespace std;
 
// function for reversing an integer
int reverse(int x) {
       long long flag=1;
        long long y =x;
        if(y<0)
        {
            flag=-1;
            y*=-1;
        }

        long long c=0;
        while(y>0)
        {
            if(c*10 >INT_MAX)
            return 0;
            c*=10;
            c+=(y%10);
            y/=10;
        }
        return flag*c;
}

int main()
{
  int n;
  cin>>n;
  //function calling
  cout<<reverse(n);
  return 0;
}

