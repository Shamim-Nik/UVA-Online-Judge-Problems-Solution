# 621 - Secret Research.cpp
```cpp
#include <cstring>
#include<iostream>
using namespace std;

void answer(string, int);

int main() {
	int test_case;
	cin >> test_case;
	while (test_case--) {
		string str;
		cin >> str;
		answer(str, str.size());
	}
	return 0;
}

void answer(string s, int len)
{
	if (s == "1" || s == "4" || s == "78")
		cout << "+\n";
	else if (s[len - 1] == '5' && s[len - 2] == '3')
		cout << "-\n";
	else if (s[0] == '9' && s[len - 1] == '4')
		cout << "*\n";
	else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
		cout << "?\n";
	else
		cout << "+\n";
}
```
# 623 - 500!.cpp
```cpp
#include<vector>
#include<iostream>
#define FOR(i,num) for(int i = 0; i <= num; i++)
#define FROM(i,num) for (int i = num; i >= 0; i--)
using namespace std;
int main()
{
	int fact[5000], num, counter, temp, i;
	while (cin >> num) {
		int m = num;
		fact[0] = 1;
		counter = 0;
		temp = 0;
		for (; num >= 2; num--)
		{

			FOR(i,counter)
			{
				temp = (fact[i] * num) + temp;
				fact[i] = temp % 10;
				temp = temp / 10;
			}
			while (temp > 0)
			{
				fact[++counter] = temp % 10;
				temp = temp / 10;
			}
		}
		cout << m << "!" << endl;
		FROM(i, counter) {
			cout << fact[i];
		}
		cout << endl;
	}
	return 0;
}
```

# 640 - Self Numbers.cpp
```cpp
#include <iostream>
using namespace std;

int main()
{
	int sum, flag, v;
	for (int i = 1; i <= 1000000; i++)
	{
		flag = 0;
		for (int j = i - 60; j <= i; j++)
		{
			v = j; 
      sum = 0;
			while (v != 0)
			{
				sum = sum + v % 10;
				v = v / 10;
			}
			if ((sum + j) == i)
			{
				flag = 1;
				break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 0)
			cout << i << endl;
	}
	return 0;
}
```

# 673 - Parentheses Balance.cpp
```cpp
#include<stack>
#include<cstring>
#include<sstream>
#include<iostream>
#define FOR(i,length) for(int i=0; i < length; i++)
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	cin.ignore();
	while (test_case--)
	{
		string parentheses;
		getline(cin, parentheses);
		stack<char>str;
		FOR(i,parentheses.size())
		{
			if (!str.empty() && parentheses[i] == ')' && str.top() == '(')
				str.pop();
			else if (!str.empty() && parentheses[i] == ']' && str.top() == '[')
				str.pop();
			else
				str.push(parentheses[i]);
		}
		if (str.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
```
