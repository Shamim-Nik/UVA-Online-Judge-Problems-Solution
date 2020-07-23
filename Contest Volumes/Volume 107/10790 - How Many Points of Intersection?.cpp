#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll A, B, p = 0;
	while (cin >> A >> B)
	{
		if (A == 0 || B == 0)
			break;
		cout << "Case " << ++p << ": ";
        ll ans= ll (A * (A - 1) / 2 * B * (B - 1) / 2);
		cout << ans << endl;
	}
	return 0;
}
