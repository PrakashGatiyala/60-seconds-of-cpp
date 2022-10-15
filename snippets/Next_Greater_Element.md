---
title: Next Greater Element in an array
tags: Stack
expertise: intermediate
---

>>> CPP program to find Next Greater Element in an Array


```cpp
vector<long long> nextGreaterElement(vector<long long> arr, int n){
    vector<long long> res(n, -1);
    res[n-1]=-1;
    stack<long long> s;
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>s.top()){
            while(!s.empty())
            {
                if(s.top()>arr[i]) { res[i]=s.top(); break; }
                s.pop();
            }
        }
        else { res[i]=s.top(); }
        s.push(arr[i]);
    }
    return res;
}

```

```cpp
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    vector <long long> res = nextGreaterElement(arr, n);
    for (long long i : res) cout << i << " ";
    cout<<endl;
    return 0;
}
```
