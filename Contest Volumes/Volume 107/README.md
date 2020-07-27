# 10773 - Back to Intermediate Math.cpp 

```cpp
#include<cmath>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
		int d, u, v, p = 0;
		double t1 = 0, t2 = 0;
		while (test_case--)
		{
			cin >> d >> v >> u;			
			
			cout << "Case " << ++p << ": ";
			if (v >= u)
				cout << "can't determine" << endl;
			else if(u==0||v==0)
				cout << "can't determine" << endl;
			else {
				t1 = (float)d / u;
				t2 = (float)d / (sqrt(pow(u, 2) - pow(v, 2)));
				cout << fixed << setprecision(3) << abs(t1 - t2) << endl;
			}
		}
	return 0;
}
```

# 10783 - Odd Sum.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef long l;

int main()
{
	ll test_case;
	while (cin >> test_case)
	{
		ll A, B, sum = 0, p = 0;
		while (test_case--)
		{
			cin >> A >> B;
			ll MIN = min(A, B);
			ll MAX = max(A, B);
			for (l i = MIN; i <= MAX; i++)
			{
				if (i % 2 != 0)
					sum += i;
			}
			cout << "Case " << ++p << ": " << sum << endl;
            sum = 0;
		}
	}
	return 0;
}
```

# 10789 - Prime Frequency.cpp 

```cpp
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef map<char, int> MAP;
typedef map<char, int>::iterator Iterator;
typedef set<char> char_set;
typedef vector<char>char_vct;
typedef set<char>::iterator It;
#define br std::cout << std::endl

int main()
{
    int test_case, p = 1;
    cin >> test_case;
    cin.ignore();
    while(test_case--){
        string str;
        getline(cin, str);
        MAP Chars;
        Chars.clear();
        for(int i = 0; i < str.size(); i++) {
            if(isalnum(str.at(i)))
                Chars[str.at(i)]++;
        }
        char_vct ans;
        ans.clear();
        bool prime = true;
        for(Iterator it = Chars.begin(); it != Chars.end(); it++) {
            int num = it->second;
            char ch = it->first;
            if (num == 1)
                continue;
            else if (num == 2) {
                ans.push_back(ch);
            }
            else {
                for (int i = 2; i < num; i++) {
                    if (num % i == 0) {
                        prime = false;
                        break;
                    }
                    else
                        prime = true;
                }
                if (prime)
                    ans.push_back(ch);
            }
        }
        cout << "Case " << p++ << ": ";
        if (ans.empty() == false) {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i];
                br;
        }
        else
            cout <<"empty" << endl;

    }
    return 0;
}
```

# 10790 - How Many Points of Intersection?.cpp 

```cpp
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
```
