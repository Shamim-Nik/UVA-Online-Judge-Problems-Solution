# 458 - The Decoder.cpp
```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	while (scanf("%c", &ch) != EOF) {
		if (ch != '\n')
			cout << (char)(ch - 7);
		else
			cout << endl;
	}
	return 0;
}
```
# 484 - The Department of Redundancy Department.cpp
```cpp
#include <iostream>
#include <map>
#include <vector>

using namespace std;
typedef long int li;

int main()
{
	map<li, li> Map;
	vector<li>Num;
	int num;
	while(cin >> num) {
	
		if(Map.find(num) != Map.end()) {
			Map[num]++;
		}
		else {
		    Num.push_back(num);
		    Map[num] = 1;
		}
	}
	for (vector<li>::iterator it = Num.begin(); it != Num.end(); it++)
		cout << *it << " " << Map[*it] << endl;
	return 0;
}
```
# 494 - Kindergarten Counting Game.cpp
```cpp
#include<cstdio>
#include<cstring>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int word, flag;
	char str[1500];
	while (gets(str))
	{
		word = flag = 0;
		for (int i = 0; str[i]; i++)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
				flag = 1;
			else {
				word += flag;
				flag = 0;
			}
		}
		word += flag;
		cout << word << endl;
	}
	return 0;
}
```
