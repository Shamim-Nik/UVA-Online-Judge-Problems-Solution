# 900 - Brick Wall Patterns.cpp
```cpp
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	int num;
	while (cin >> num) {
		if (num == 0)
			break;
		if (num == 1) {
			cout << 1 << endl;
			continue;
		}			
		ll fibonacci[55], i;
		fibonacci[0] = 1; fibonacci[1] = 2;
		for (i = 2; i < num; i++) {
				fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		}
		cout << fibonacci[i - 1] << endl;
	}
}
```

# 913 - Joana and the Odd Numbers.cpp
```cpp
#include<iostream>
using namespace std;
typedef long long ll;
inline ll number(ll);

int main()
{
	ll num;
	while (cin >> num) {
		if (num < 1)
			break;
		cout << 6 * (number(num)) - 9 << endl;
	}
	return 0;
}
inline ll number(ll num) {
	num = (num + 1) / 2;
	ll total = num * num;
	return total;
}
```
# 948 - Fibonaccimal Base.cpp
```cpp
#include<iostream>
using namespace std;
typedef long long ll;
int main() 
{
	ll tes_case;
	cin >> tes_case;

	ll fibonacci[50];
	fibonacci[0] = 1; fibonacci[1] = 2;
	for (int i = 2; i <= 38; i++)
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];

	while (tes_case--) {
		ll num;
		cin >> num;
		bool ans = false;
		cout << num << " = ";
		for (int i = 38; i >=0; i--) {
			if (num / fibonacci[i] == 1) {
				ans = true;
				num %= fibonacci[i];
				cout << 1;
			}
			else if(ans)
				cout << 0;
		}
		cout << " (fib)" << endl;
	}
	return 0;
}
```

# 993 - Product of digits.cpp
```cpp
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--){
		int num;
		cin >> num;
		if(num <= 9){
			cout << num << endl;
			continue;
		}
		
		vector<int>Arr;
		for(int i = 9; i > 1; i--){
			while(num % i == 0){
				num /= i;
				Arr.push_back(i);
			}
		}
		
		if(num != 1){
			cout << -1 << endl;
			continue;
		}
		for(int i = Arr.size() - 1; i >= 0; i--)
			cout << Arr[i];
		cout << endl;
	}
	return 0;
}
```
