# 263 - Number Chains.cpp
```cpp
#include<set>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
bool ans = true;
typedef long long ll;
int ascending_order(ll);
int  descending_order(ll);
int main()
{
	ll num, a_order, d_order;
	while (cin >> num)
	{
		vector<ll>check;
		check.push_back(-1);
		int cnt = 0, sub = -1;
		if (num == 0)
			break;
		cout << "Original number was " << num << endl;
		a_order = ascending_order(num);
		d_order = descending_order(num);
		do {
			num = sub;
			sub = d_order - a_order;
			check.push_back(sub);
			cout << d_order << " - " << a_order << " = " << sub << endl;
			a_order = ascending_order(sub);
			d_order = descending_order(sub);
			cnt++;
			for (int i = 0; i < check.size(); i++) {
				for (int j = i + 1; j < check.size(); j++) {
					if (check[i] == check[j]) {
						ans = true;
						break;
					}

					else
						ans = false;
				}
				if (ans)
					break;
			}
			if (ans) {
				break;
			}
				
			
		} while (num != sub);
		cout << "Chain length " << cnt << endl << endl;
		check.clear();
	}
	return 0;
}
int ascending_order(ll num)
{
	int Arr[13], i = 0, sum = 0;
	memset(Arr, 0, 13);
	while (num > 0)
	{
		int rem;
		rem = num % 10;
		Arr[i++] = rem;
		num /= 10;
	}
	sort(Arr, (Arr + i));
	for (int j = 0; j < i; j++)
		sum = sum * 10 + Arr[j];
	return sum;
}
int  descending_order(ll num)
{
	int Arr[13], i = 0, sum = 0;
	memset(Arr, 0, 13);
	while (num > 0)
	{
		int rem;
		rem = num % 10;
		Arr[i++] = rem;
		num /= 10;
	}
	for (int j = 0; j < i; j++)
		for(int k=j;k<i;k++)
			if (Arr[j] < Arr[k])
			{
				int temp;
				temp = Arr[j];
				Arr[j] = Arr[k];
				Arr[k] = temp;
			}
	for (int j = 0; j < i; j++)
		sum = sum * 10 + Arr[j];
	return sum;
}
```

# 264 - Count on Cantor.cpp
```cpp
#include <iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num) {
		int row = 0, col = 0, rep;
		cout << "TERM " << num << " IS ";
		for (rep = 1; rep < num; rep++)
			num -= rep;
		if (rep % 2 == 0) {
			row = num;
			col = rep - row + 1;
		}
		else {
			col = num;
			row = rep - num + 1;
		}
		cout << row << "/" << col << endl;
	}
	return 0;
}
```

# 272 - TEX Quotes.cpp
```cpp
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"'){
            if(cnt==0)
                cout<<"``"
                ,cnt++;
            else
                cout<<"''"
                ,cnt--;
        }
        else
            cout<<ch;
    }
    std::cin.get();
}
```

# 294 - Divisors.cpp
```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long ll;

inline int Divisor(ll num) {
    double len = sqrt(num), cnt = 0;
    cnt = 0;
    for (int j = 1; j <= len; j++) {
        if (num % j == 0) {
            cnt++;
            if (j < len)
                cnt++;
            else
                continue;
        }
    }
    return (int)cnt;
}

int main()
{
    int test_case, cnt, mx;
    cin >> test_case;
    while (test_case--) {
        ll ln,un, n;///ln = lowest number , un = uper number
        cin >> ln >> un;
        cout << "Between " << ln << " and " << un << ", ";
        cnt = 0, mx = 0;
        for (; ln <= un; ln++) {
            cnt = Divisor(ln);
            if (cnt > mx) {
                mx = cnt;
                n = ln;
            }
        }
        cout << n << " has a maximum of " << mx << " divisors." << endl;
    }
    return 0;
}
```
