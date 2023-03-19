---
title: Subsequences of a String | Iterative Method
tags: Bits manipulation
expertise: Intermediate
---

```
Input : abc
Output : a, b, c, ab, ac, bc, abc

Input : aab
Output : a, b, aa, ab, aab
```

Approach - We use bit pattern from binary representation of 1 to 2^length(s) – 1.
input = “abc” 
Binary representation to consider 1 to (2^3-1), i.e 1 to 7. 
Start from left (MSB) to right (LSB) of binary representation and append characters from input string which corresponds to bit value 1 in binary representation to Final subsequence string sub.

```cpp
// CPP Program to print all subsequences of a string | Iterative Method

#include <bits/stdc++.h>
using namespace std;

string subsequence(string s, int binary, int len)
{
	string sub = "";
	for (int j = 0; j < len; j++)

		if (binary & (1 << j))
			sub += s[j];

	return sub;
}

void possibleSubsequences(string s){

	map<int, set<string> > sorted_subsequence;

	int len = s.size();

	int limit = pow(2, len);
	
	for (int i = 1; i <= limit - 1; i++) {
		
		string sub = subsequence(s, i, len);
		
		sorted_subsequence[sub.length()].insert(sub);
	}

	for (auto it : sorted_subsequence) {
			
		for (auto ii : it.second)
			
			cout << ii << " ";
		
		cout << endl;
	}
}

int main()
{
	string s; 
    cin>>s;
	possibleSubsequences(s);
	return 0;
}

```
