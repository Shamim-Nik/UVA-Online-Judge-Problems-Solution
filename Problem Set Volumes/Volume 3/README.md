# 324 - Factorial Frequencies.cpp
```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> Vct;
typedef map<int, int> MAP;

int main()
{
	int num;
	while (cin >> num) {
		cout << num << "! --" << endl;
		int fact[5000];	fact[0] = 1;
		int cnt = 0, temp = 0, p = 0;
		for (; num > 1; num--) {
			for (int i = 0; i <= cnt; i++) {
				temp = (fact[i] * num) + temp;
				fact[i] = temp % 10;
				temp /= 10;
			}
			while (temp > 0) {
				fact[++cnt] = temp % 10;
				temp /= 10;
			}
		}
		MAP digits;
		map<int, int>::iterator it;
		for (int i = cnt; i >= 0; i--) {
			digits[fact[i]]++;
		}
		for (int i = 0; i <= 9; i++) {
			if (i == 5)
				cout << endl;
			bool Ans = false;
			for (it = digits.begin(); it != digits.end(); it++) {
				if (i == it->first) {
					cout << "   " << "(" << it->first << ")   " << it->second;
					Ans = false;
					break;
				}
				else {
					Ans = true;					
				}
			}
			if (Ans) {
				cout << "   " << "(" << i << ")   " << 0;
			}
		}			
		cout << endl;
	}
	return 0;
}
```
# 357 - Let Me Count The Ways.cpp
```cpp
#include <iostream>
using namespace std;

int main() {
	long long DP[30001] = {};
	int m[] = { 1, 5, 10, 25, 50 }, i, j;
	DP[0] = 1;
	for (i = 0; i < 5; i++) {
		for (j = m[i]; j <= 30000; j++) {
			DP[j] += DP[j - m[i]];
		}
	}
	while (cin>>i) {
		if (DP[i] != 1)
			cout << "There are " << DP[i] << " ways to produce " << i << " cents change." << endl;
		else
			cout << "There is only 1 way to produce " << i << " cents change.\n";
	}
	return 0;
}
```
# 374 - Big Mod.cpp
```cpp
#include<iostream>
using namespace std;
typedef long l;
inline int Big_Mod(l, l, l);

int main()
{
	l B, P, M;
	while (cin >> B >> P >> M) {
		cout << Big_Mod(B, P, M) << endl;
	}
	return 0;
}
inline int Big_Mod(l B, l P, l M)
{
	if (P == 0)
		return 1;
	if (P % 2 == 0)
		return (Big_Mod(B, (P / 2), M) * Big_Mod(B, (P / 2), M)) % M;
	return (Big_Mod(B, (P - 1), M) * (B % M)) % M;
}
```
# 382 - Perfection.cpp
```cpp
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int num;
	cout << "PERFECTION OUTPUT" << endl;
	while (cin >> num) {
		if (num == 0) {
			cout << "END OF OUTPUT" << endl;
			break;
		}
		ll cnt = 0;
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0)
				cnt += i;
		}
		if (cnt == num)
			cout << setw(5) << num << "  PERFECT" << endl;
		else if (cnt > num)
			cout << setw(5) << num << "  ABUNDANT" << endl;
		else
			cout << setw(5) << num << "  DEFICIENT" << endl;
	}
	return 0;
}
```
