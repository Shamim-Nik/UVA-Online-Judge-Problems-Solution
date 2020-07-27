# 10101 - Bangla Numbers.cpp 

```cpp
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vct;
#define br cout << endl;
#define FOR(i, len) for (int i = 0; i < len; i++)
int range[4] = {10000000, 100000, 1000, 100};
char translate[4][6] = {"kuti", "lakh", "hajar", "shata"};

void display(ll num) {
	FOR(i, 4) {
		if (num >= range[i]) {
			display(num / range[i]);
			cout << " " << translate[i];
			num %= range[i];
		}
	}
	if (num)
		cout << " " << num;
}
int main()
{
	ll num;
	int p = 0;
	while (cin >> num) {
		cout << setw(4) << ++p << ".";
		if (num == 0) {
			cout << " " << 0;
		}
		display(num);
		br;
	}
	return 0;
}
```

# 10107 - What is the Median?.cpp 

```cpp
#include<vector>
#include<iostream>
#include<algorithm>
#define position2(n) (n + 1) / 2
#define position(l) ((l + 1) / 2 - 1)
#define All(Arr) Arr.begin(), Arr.end()
using namespace std;

int main()
{
	int num;
	vector<int>Arr;
	while (cin >> num)
	{
		Arr.push_back(num);
		sort(All(Arr));
		if(Arr.size()%2!=0)
			cout << Arr[position(Arr.size())] << endl;
		else
			cout << (Arr[position(Arr.size())] + Arr[position2(Arr.size())]) / 2 << endl;
	}
	return 0;
}
```

# 10110 - Light, more light.cpp 

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long value;
	while (cin>>value) {
	    if (value == 0)
	        return 0;
		cout << (floor(sqrt(value)) == ceil(sqrt(value)) ? "yes" : "no") << endl;
	}
	return 0;
}
```

# 10114 - Loansome Car Buyer.cpp 

```cpp
#include<iostream>
using namespace std;
typedef double d;
typedef long long ll;

int main()
{
	 int month_duration, records;
	d  down_payment, loan, month_long[101];
	while (true)
	{
		cin >> month_duration >> down_payment >> loan >> records;
		if (month_duration < 0)
			break;
		int month;
		d percentage;
		while (records--)
		{
			cin >> month >> percentage;
			for (int i = month; i < 101; i++)
				month_long[i] = percentage;
		}
		int s = 0;
		d current_loan = loan;
		d monthly_payment = loan / month_duration;
		d current_value = (loan + down_payment) * (1 - month_long[0]);
		while (current_value<current_loan)
		{
			s++;
			current_loan -= monthly_payment;
			current_value *= (1 - month_long[s]);
		}
		cout << s << " " << "month";
		if (s != 1)
			cout << "s";
		cout << endl;
	}
	return 0;
}
```

# 10127 - Ones.cpp 

```cpp
#include<iostream>
#define ans(count) cout<<count<<endl;
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int count = 1, temp = 1;
		do
		{
			temp = temp * 10 + 1;
			temp %= num;
			count++;
		} while (temp != 0);
		ans (count);
	}
	return 0;
}
```

# 10190 - Divide, But Not Quite Conquer!.cpp 

```cpp
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    long int A, B, i;
    while (scanf("%ld %ld", &A, &B) == 2) {
        if (A < 2 || B <= 1 || A < B) {
            cout << "Boring!" << endl;
            continue;
        }
        bool ans = true;
        long int Arr[100] = {0};
        Arr[0] = A;
        for (i = 1;; i++) {
            if (Arr[i - 1] == 1)
                break;
            if (Arr[i - 1] % B) {
                ans = false;
                break;
            }
            Arr[i] = Arr[i - 1] / B;
        }
        if (ans == false)
            cout << "Boring!";
        else {
            cout << Arr[0];
            for (B = 1; B < i; B++) {
                cout << " " << Arr[B];
            }
        }
        cout << endl;
    }
    return 0;
}
```
