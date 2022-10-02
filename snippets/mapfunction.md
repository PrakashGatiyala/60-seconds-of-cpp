---
title: mapfunction
tags: function
expertise: beginner
---

Explain briefly what the snippet does.

-key: The key data type to be stored in the map.
-type: The data type of value to be stored in the map.
-compare: A comparison class that takes two arguments of the same type bool and returns a value. This argument is optional and the binary predicate less<"key"> is the default value.
-alloc: Type of the allocator object. This argument is optional and the default value is allocator .

```cpp
#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std;  
int main()  
{  
   map<int, string> Employees;  
   // 1) Assignment using array index notation  
   Employees[101] = "Nikita";  
   Employees[105] = "John";  
   Employees[103] = "Dolly";  
   Employees[104] = "Deep";  
   Employees[102] = "Aman";  
   cout << "Employees[104]=" << Employees[104] << endl << endl;  
   cout << "Map size: " << Employees.size() << endl;  
   cout << endl << "Natural Order:" << endl;  
   for( map<int,string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  
   cout << endl << "Reverse Order:" << endl;  
   for( map<int,string>::reverse_iterator ii=Employees.rbegin(); ii!=Employees.rend(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  
}  
```
