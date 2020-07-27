# 10921 - Find the Telephone.cpp 

```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str)) {
		for(int i = 0; i < str.size(); i++) {
			if(str.at(i) >= 'A' && str.at(i) <= 'C')
				cout << 2;
			else if(str.at(i) >= 'D' && str.at(i) <= 'F')
				cout << 3;
			else if(str.at(i) >= 'G' && str.at(i) <= 'I')
				cout << 4;
			else if(str.at(i) >= 'J' && str.at(i) <= 'L')
				cout << 5;
			else if(str.at(i) >= 'M' && str.at(i) <= 'O')
				cout << 6;
			else if(str.at(i) >= 'P' && str.at(i) <= 'S')
				cout << 7;
			else if(str.at(i) >= 'T' && str.at(i) <= 'V')
				cout << 8;
			else if(str.at(i) >= 'W' && str.at(i) <= 'Z')
				cout << 9;
			else
				cout << str.at(i);
		}
		cout << endl;
	}
	return 0;
}
```

# 10922 - 2 the 9s.cpp 

```cpp
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	string str;
	while(cin >> str) {
		bool ans = true;
		int cnt = 1;
		if(str == "0")
			break;
		int sum = 0;
		for(int i = 0; i < str.size(); i++) {
			int value;
			value = str.at(i) - '0';
			sum += value;
		}
		if(sum % 9 != 0)
			ans = false; 
		else 
			ans = true;
			
		while(sum > 9){
			ll s = 0;
			while(sum != 0){
				s += (sum % 10);
				sum /= 10;
			}
			sum = s;
			cnt++;
		}
		if(ans)
			cout << str << " is a multiple of 9 and has 9-degree " << cnt << "." << endl;
		else
			cout << str << " is not a multiple of 9." << endl;
	}
	return 0;
}
```

# 10929 - You can say 11.cpp 

```cpp
#include<cstring>
#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	string num;
	while (cin >> num) {
		if (num == "0")
			break;
		ll sum = 0, rem = 0;
		for (int i = 0; i < num.size(); i++)
		{
			sum = (rem * 10) + (num[i] - '0');
			rem = sum % 11;
		}
		cout << num << (rem > 0 ?" is not a multiple of 11."  : " is a multiple of 11.") << endl;
	}
	return 0;
}
```

# 10931 - Parity.cpp 

```cpp
#include<vector>
#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll num;
	while (cin >> num && num != 0)
	{
		vector<int>Bin;
		ll cnt = 0;
		while (num > 0)
		{
			int rem;
			rem = num % 2;
			Bin.push_back(rem);
			num /= 2;

		}
		cout << "The parity of ";
		for (int i = Bin.size() - 1; i >= 0; i--) {
			cout << Bin[i];
			if (Bin[i] == 1)
				cnt++;
		}
		cout << " is " << cnt << " (mod 2)." << endl;
		Bin.clear();
	}
	return 0;
}
```

# 10945 - Mother bear.cpp 

```cpp
#include<sstream>
#include<cstring>
#include<iostream>
#define FOR(i,len) for(int i = 0; i < len; i++)
using namespace std;
void reverse(string);

int main()
{
	string str;
	char s[1000];
	while (getline(cin,str))
	{
		bool ans = false;
		int j = 0;
		if (str == "DONE")
			break;
		FOR(i, str.size())
		{
			if (isalpha(str.at(i)))
			{
				s[j] = tolower(str.at(i));
				j++;
			}
		}
		s[j] = '\0';
		reverse(s);
	}
	return 0;
}

void reverse(string str)
{
	int j = 0;
	char str1[1000];
	for (int i = str.size() - 1; i >= 0; i--, j++)
		str1[j] = str[i];
	str1[j] = '\0';
	if (str == str1)
		cout << "You won't be eaten!" << endl;
	else
		cout << "Uh oh.." << endl;
}
```

# 10954 - Add All.cpp 

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            return 0;
        vector<int> Arr;
        while (n--) {
            int value;
            cin >> value;
            Arr.push_back(value);
        }
        int sum, cost = 0;
        sort(Arr.begin(), Arr.end());
        while (Arr.size() > 1) {
            sum = Arr.front();
            Arr.erase(Arr.begin());
            sum += Arr.front();
            Arr.erase(Arr.begin());
            cost += sum;
            Arr.push_back(sum);
            sort(Arr.begin(), Arr.end());
        }
        cout << cost << endl;
    }
    return 0;
}
```
