#include<bits/stdc++.h>
using namespace std;
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        if(n%3!=0 || n<=0)
            return false;
        while(n>0)
        {
             n/=3;
            if(n==1)
                return true;
            if(n%3 != 0)
                return false;
        }
        return true;
    }
    int main()
    {
      cout<<"enter number";
      int n;
      cin>>n;
      if(isPowerOfThree(n))
        cout<<"true";
      else
        cout<<"false";
        return 0;
    }