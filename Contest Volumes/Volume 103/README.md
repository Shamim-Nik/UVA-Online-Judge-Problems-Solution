# 10302 - Summation of Polynomials.cpp 

```cpp
#include<cmath>
#include<iostream>
using namespace std;
typedef unsigned long long ull;
int main()
{
	int num;
	while (cin >> num)
	{
		ull sum = 0;
		for (ull i = 1; i <= num; i++)
			sum = sum + (i * i * i);
		cout << sum << endl;
	}
	return 0;
}
```

# 10323 - Factorial! You Must be Kidding!!!.cpp 

```cpp
#include<iostream>
using  namespace std;
typedef long long ll;
inline ll fact(ll);

int main()
{
	int num;
	while (cin >> num)
	{
		if (num < 0)
		{
			if (num % 2 != 0)
				cout << "Overflow!" << endl;
			else
				cout << "Underflow!" << endl;
		}
		else if (num > 13)
			cout << "Overflow!" << endl;
		else if (fact(num) < 10000)
			cout << "Underflow!" << endl;
		else
			cout << fact(num) << endl;
	}
}
inline ll fact(ll num)
{
	if (num == 0)
		return 1;
	else
		return (num * fact(num - 1));
}
```

# 10324 - Zeros and Ones.cpp 

```cpp
#include<iostream>
#include <algorithm>
using namespace std;
bool ans = false;

int main()
{
    int n, a, b, c = 0;
    string str;
    while (cin >> str)
    {
        cin >> n;
        c += 1;
        cout << "Case " << c << ":" << endl;
        start:;
        while(n--)
        {
            cin >> a >> b;
            int i = min(a, b) + 1;
            a = max(a, b);
            ans = false;
            for (; i <= a; i++)
            {
                if (str[i] == str[i - 1])
                    continue;
                else {
                    cout << "No" << endl;
                    goto start;
                }
            }
            cout << "Yes" << endl;
        }
        cin.ignore();
    }
    return 0;
}
```

# 10327 - Flip Sort.cpp 

```cpp
#include<vector>
#include<iostream>
#define FOR(i,size) for(int i = 0; i < size; i++)
using namespace std;

int main()
{
	int size;
	while (cin >> size) {
		vector<int>Arr;
		while (size--)
		{
			int value;
			cin >> value;
			Arr.push_back(value);
		}
		int cnt = 0;
		FOR(i, Arr.size())
		{
			for (int j = 0; j < i; j++)
				if (Arr[i] < Arr[j])
					cnt++;
		}
		cout << "Minimum exchange operations : " << cnt << endl;
	}
	return 0;
}
```

# 10346 - Peter’s Smokes.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll N, K;
	while (cin >> N >> K) {
		cout << (N + (N - 1) / (K - 1)) << endl;
	}
	return 0;
}
```

# 10347 - Medians.cpp 

```cpp
#include<cmath>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long double  ld;

int main()
{
	ld Median1, Median2, Median3;
	while (cin >> Median1 >> Median2 >> Median3)
	{
		ld A = 2 * ((pow(Median1, 2) * pow(Median2, 2)) + (pow(Median1, 2) * pow(Median3, 2)) + (pow(Median3, 2) * pow(Median2, 2)));
		ld B = (pow(Median1, 4) + pow(Median2, 4) + pow(Median3, 4));
		if (Median1 == 0 && Median2 == 0 && Median3 == 0)
			cout << "-1.000" << endl;
		else if (A > B)
			cout << fixed << setprecision(3) << (ld)sqrt(A - B) / 3 << endl;
		else
			cout << "-1.000" << endl;
	}
	return 0;
}
```

# 10370 - Above Average.cpp 

```cpp
#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>
#define FOR(i,t) for(int i=0;i<t;i++)
#define logo(result) cout << fixed << setprecision(3) << result << "%" << endl;
using namespace std;
typedef double db;

int main()
{
	int test_caes;
	cin >> test_caes;
	while (test_caes--)
	{
		int students, cnt = 0, total_marks = 0;
		cin >> students;
		vector<int> marks;
		FOR(i, students) {
			int mark;
			cin >> mark;
			marks.push_back(mark);
			total_marks += marks[i];
		}
		db avareage = total_marks / (db)students;
		for (int i = 0; i < marks.size(); i++) {
			if (avareage < (db)marks[i])
				cnt++;
		}
		db result = cnt / (db)students * 100;
		logo(result);
		marks.clear();
	}
	return 0;
}
```
