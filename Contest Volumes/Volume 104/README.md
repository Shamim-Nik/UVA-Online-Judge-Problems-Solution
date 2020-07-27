# 10420 - List of Conquests.cpp 

```cpp
#include<map>
#include<sstream>
#include<cstring>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
	int lines;
	map<string, int>documment;
	cin >> lines;
	while (lines--)
	{
		string country_name, others;
		cin >> country_name;
		documment[country_name]++;
		getline(cin, others);
	}
		for (map<string, int>::iterator it = documment.begin(); it != documment.end(); it++)
			cout << it->first << " " << it->second << endl;
	return 0;
}
```

# 10424 - Love Calculator.cpp 

```cpp
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<sstream>
#include<iomanip>
#include<cstdio>
using namespace std;
typedef long long ll;
inline int A(string);

int main()
{
	string str1, str2;
	while (getline(cin, str1)) {
		str1[str1.size() + 1] = '\0';
		getline(cin, str2);
		str2[str2.size() + 1] = '\0';
		int a = A(str1);
		int b = A(str2);
		if (a > b) {
			cout << fixed << setprecision(2) << (b * 100 / (double)a) << " %" << endl;
		}
		else {
			cout << fixed << setprecision(2) << (a * 100 / (double)b) << " %" << endl;
		}
	}
	return 0;
}

inline int A(string s) {
	ll sum = 0;
	for (int i = 0; i < s.size(); i++) {
		char ch = tolower(s.at(i));
		if (isalpha(ch))
			sum += ch - 'a' + 1;
	}
	while (sum > 9) {
		int temp = 0;
		while (sum != 0) {
			temp += sum % 10;
			sum /= 10;
		}
		sum = temp;
	}
	return sum;
}
```

# 10469 - To Carry or not to Carry.cpp 

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
		cout << (A ^ B) << endl;
	return 0;
}
```

# 10474 - Where is the Marble?.cpp 

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i, n) for (int i = 0; i < n; i++)

int main()
{
	int N, Q, p = 0;
	while (cin >> N >> Q) {
		if (N == 0 && Q == 0) 
			break;
		vector <int>number_of_marbles;
		vector <int>number_of_queries;
		FOR(i, N) {
			int value;
			cin >> value;
			number_of_marbles.push_back(value);
		}
		FOR(i, Q) {
			int value;
			cin >> value;
			number_of_queries.push_back(value);
		}
		
		cout << "CASE# " << ++p << ":" << endl;
		sort(number_of_marbles.begin(), number_of_marbles.end());
		FOR(i, number_of_queries.size()) {
			bool ans = false;
			for (int j = 0; j < number_of_marbles.size(); j++) {
				if (number_of_queries[i] == number_of_marbles[j]) {
					ans = true;
					cout << number_of_queries[i] << " found at " << j + 1 << endl;
					break;
				}
				else {
					ans = false;
				}
			}
			if (!ans)
				cout << number_of_queries[i] << " not found" << endl;
		}
		number_of_marbles.clear(); number_of_queries.clear();
	}
	return 0;
}
```
