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
