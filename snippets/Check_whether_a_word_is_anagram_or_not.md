---
title: Checks if a word is ANAGRAM or not 
expertise: beginner
---

- Two unequal words are called **anagrams** if both of them are made up of exact same words differing only in their arrangments.
  
  > e.g. **DOG & GOD are anagram as they both contains same letters whereas RULES & LESRT are not anagrams since the count of U and T  is not equal in both strings.**

- **Approach:** 
  > - Sort both the string and compare each and every letter of both strings. 
  > - If all letters matched then, print true. Otherwise, print false.
  > - e.g. We have 
  > - str1 = “INTEGER”
  > - str2=”TEGERNI”
  > - After sorting Str1 and Str2, we find that both of the strings are
  > - str1 =” EEGINRT”
  > - str2=” EEGINRT”
  > - Since both of the strings are the same, this means both str1 and str2 are anagrams of each other.

### C++
```cpp



#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
  // Case 1: when both of the strings have different lengths
  if (str1.length() != str2.length())
    return false;
 
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
 
  // Case 2: check if every character of str1 and str2 matches with each other
  for (int i = 0; i < str1.length(); i++)
  {
    if (str1[i] != str2[i])
      return false;
  }
  return true;
}
int main()
{
  string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}


/*
Output: True

Time Complexity: O(nlogn) since sorting function requires nlogn iterations.

Space Complexity: O(1)

*/
```

### Java
```java

import java.io.*;
class Solution {
  static boolean CheckAnagrams(char[] str1, char[] str2) { 
    // Case 1: when both of the strings have different lengths
    if (str1.length() != str2.length())
    return false;
 
    Arrays.sort(str1);
    Arrays.sort(str2);
  
    // Case 2: check if every character of str1 and str2 matches with each other
    for (int i = 0; i < str1.length(); i++)
    {
      if (str1[i] != str2[i])
        return false;
    }
    return true;
  }
  
  public static void main(Sting args[]) {
    char[] Str1 = ['I', 'N', 'T', 'E', 'G', 'E', 'R'];
    char[] Str1 = ['T', 'E', 'G', 'E', 'R', 'N', 'I'];
    if(CheckAnagrams(Str1, Str2))
      System.out.println("True");
    else
      System.out.println("False");
    return 0;
  }
}


/*
Output: True

Time Complexity: O(nlogn) since sorting function requires nlogn iterations.

Space Complexity: O(1)

*/
