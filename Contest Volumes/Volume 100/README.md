# 10013 - Super long sums.cpp 

```cpp
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		int size;
		cin >> size;
		vector<int>sum;
		while (size--) {
			int N, M;
			cin >> N >> M;
			sum.push_back(N + M);
		}

		for (int i = sum.size() - 1; i >= 1; i--) {
			if (sum[i] > 9) {
				sum[i - 1] += sum[i] / 10;
				sum[i] %= 10;
			}
		}

		cout << sum[0];
		for (int i = 1; i < sum.size(); i++)
			cout << sum[i];
		cout << endl;
		if (test_case)
			cout << endl;
	}
	return 0;
}
```

# 10018 - Reverse and Add.cpp

```cpp
#include<iostream>
typedef long long ll;

int main()
{
	int temp;
	std::cin >> temp;
	while (temp--)
	{
		int d = 0;
		ll sum = 0, l, num;
		std::cin >> num;
		do
		{
			l = num;
			sum = 0;
			while (num)
			{
				int rev = num % 10;
				sum = sum * 10 + rev;
				num /= 10;
			}
			d++;
			num = l + sum;
		} while (l != sum);
		std::cout << --d << " " << sum << std::endl;
	}
	std::cin.get();
}
```

# 10019 - Funny Encryption Method.cpp 
```cpp
#include<iostream>
#include<algorithm>
using namespace std;
inline int decimal_to_binary(int);
inline int hexadecimal_to_binary(int);

int main()
{
    int test_case;
    cin >> test_case;

    while(test_case--){
        int value;
        cin >> value;
        cout << decimal_to_binary(value) << " " << hexadecimal_to_binary(value) << endl;
    }
	return 0;
}
inline int decimal_to_binary(int num) {
    int cnt = 0;
    while(num > 0)
    {
        if(num % 2 == 1)
            cnt++;
        num /= 2;
    }
    return cnt;
}

inline int hexadecimal_to_binary(int num) {
    int sum = 0, temp = 0;
    while(num > 0){
        int rem;
        rem = num % 10;
        switch(rem) {
            case 1:
            case 2:
            case 4:
            case 8:
                temp = 1;
                   break;
            case 3:
            case 5:
            case 6:
            case 9:
                temp = 2;
                   break;
            case 7:
                temp = 3;
                   break;
        }
        num /= 10;
        sum += temp;
    }
    return sum;
}
```

# 10025 - The ? 1 ? 2 ? ... ? n = k problem.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		ll num, temp = 0, ans = 1;
		cin >> num;
		num = abs(num);
		while (true) {
			temp += ans;
			if(temp>=num&&((temp-num)%2==0))
				break;
			ans++;
		}
		cout << ans << endl;
		if (test_case)
			cout << endl;
	}
	return 0;
}
```
# 10035 - Primary Arithmetic.cpp 

```cpp
#include<cmath>
#include<memory>
#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long ul;

int main()
{
    ul num1, num2;
    while(cin >> num1 >> num2)
    {
        int cnt = 0, cary = 0;
        if(num1 == 0 && num2 == 0)
            break;
        ul MAX, MIN;
        MAX = max(num1, num2);
        MIN = min(num1, num2);
        while(MAX > 0)
        {
            int rem1, rem2;
            rem1 = MAX % 10;
            rem2 = MIN % 10;
            rem1 += cary;
            if(rem1 + rem2 > 9)
                cnt++,
                cary = 1;
            else 
                cary = 0;
            MAX /= 10;
            MIN /= 10;
        }
        if(cnt == 0)
            cout << "No carry operation." << endl;
        else if(cnt > 1)
            cout << cnt << " carry operations." <<endl;
        else
            cout << cnt << " carry operation." <<endl;
    }
    return 0;
}
```

# 10038 - Jolly Jumpers.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, Arr[3001], i;
	while (cin >> n)
	{
		for (i = 0; i < n; i++)
			cin >> Arr[i];
		int mark[3001] = { 0 }, flag = 0;

		for (i = 1; i < n; i++) {
			if (abs(Arr[i] - Arr[i - 1]) < n)
				mark[abs(Arr[i] - Arr[i - 1])]++;
		}

		for (i = 1; i < n; i++)
			if (mark[i] == 0)
				flag = 1;
		if (flag)
			cout << "Not jolly" << endl;
		else
			cout << "Jolly" << endl;
	}
	return 0;
}
```

# 10041 - Vito's Family.cpp 

```cpp
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int relatives;
		cin >> relatives;
		vector<int> Arr;
		
		for(int i = 0; i < relatives; i++) {
			int value;
			cin >> value;
			Arr.push_back(value);		
		}
		
		sort(Arr.begin(), Arr.end());
		int len = Arr.size();
		len /= 2;		
		int middel_number = Arr[len];
		int ans = 0;
		for(int i = 0; i < Arr.size(); i++) {
			ans += abs(middel_number - Arr[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
```

# 10055 - Hashmat the brave warrior.cpp 

```cpp
#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll num1, num2;
    while (cin >> num1 >> num2)
        cout << abs(num1-num2) << endl;
    return 0;
}
```

# 10066 - The Twin Towers.cpp 

```cpp
#include<vector>
#include<memory>
#include<iostream>
#include<algorithm>
#define FOR(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main()
{
	int num1, num2, test = 0, cnt = 0;
	while (cin >> num1 >> num2)
	{
		int ans[num1 + 1][num2 + 1];
		if (num1 == 0 && num2 == 0)
			break;
		vector<int>tower1;
		vector<int>tower2;

		//take second line input
		FOR(i, num1)
		{
			int value;
			cin >> value;
			tower1.push_back(value);
		}

		//take third line input
		FOR(i, num2)
		{
			int value;
			cin >> value;
			tower2.push_back(value);
		}

		for (int i = 0; i <= tower1.size(); i++)
		{
			for (int j = 0; j <= tower2.size(); j++)
			{
				if (i == 0 || j == 0)
					ans[i][j] = 0;
				else if (tower1[i - 1] == tower2[j - 1])
					ans[i][j] = ans[i - 1][j - 1] + 1;
				else
					ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
			}
		}

		cout << "Twin Towers #" << ++test << endl;
		cout << "Number of Tiles : " << ans[num1][num2] << endl << endl;
		cnt = 0;
		tower1.clear();
		tower2.clear();
	}
}
```

# 10070 - Leap Year or Not Leap Year and ...cpp 

```cpp
#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define FOR(i, len) for(int i = 0; i < len; i++)
#define br "\n"
using namespace std;

int main()
{
	string str;
	int p = 0;
	while (cin >> str)
	{
		int test4, test15, test55, test100, test400;
		int huluculu = 0, bulukulu = 0, leap = 0, len;
		if (p > 0)
			cout << br;
		p++;
		test4 = test15 = test55 = test100 = test400 = 0;
		len = str.size();
		FOR(i, len)
		{
			test4 = (test4 * 10 + (str[i] - '0')) % 4;
			test15 = (test15 * 10 + (str[i] - '0')) % 15;
			test55 = (test55 * 10 + (str[i] - '0')) % 55;
			test100 = (test100 * 10 + (str[i] - '0')) % 100;
			test400 = (test400 * 10 + (str[i] - '0')) % 400;
		}

		if (test4 == 0)
		{
			if (test100 == 0)
			{
				if (test400 == 0) {
					cout << "This is leap year." << br;
					leap = 1;
				}
			}
			else {
				cout << "This is leap year." << br;
				leap = 1;
			}
		}

		if (test15 == 0) {
			cout << "This is huluculu festival year." << br;
			huluculu = 1;
		}

		if (leap == 1 && test55 == 0) {
			cout << "This is bulukulu festival year." << br;
			bulukulu = 1;
		}

		if (leap == 0 && huluculu == 0 && bulukulu == 0)
			cout << "This is an ordinary year." << br;
	}
	return 0;
}
```

# 10071 - Back to High School Physics.cpp 

```cpp
#include<iostream>
using namespace std;

int main()
{
	int velocity, time;
	while (cin >> time >> velocity)		
		cout << 2 * time * velocity << endl;
	return 0;
}
```

# 10082 - WERTYU.cpp 

```cpp
#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string Qwerty="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.size();i++)
        {
            if(str.at(i)==' ')
            cout<<" ";
            else
            {
                for(int j=0;j<Qwerty.size();j++){
                    if(str.at(i)==Qwerty.at(j))
                        cout<<Qwerty.at(j-1);
                }                
            }            
        }
        cout<<endl;
    }
    return 0;
}
```
