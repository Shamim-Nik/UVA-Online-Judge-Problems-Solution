# 10220 - I Love Big Numbers !.cpp 

```cpp
#include<vector>
#include<iostream>
#define FOR(i,num) for(int i = 0; i <= num; i++)
#define FROM(i,num) for (int i = num; i >= 0; i--)
using namespace std;
int main()
{
	int fact[10000], num, counter, temp, i, test_case;
	while (cin >> num) {
		int m = num, sum = 0;
		fact[0] = 1;
		counter = 0;
		temp = 0;
		for (; num >= 2; num--)
		{
			FOR(i, counter)
			{
				temp = (fact[i] * num) + temp;
				fact[i] = temp % 10;
				temp = temp / 10;
			}
			while (temp > 0) {
				fact[++counter] = temp % 10;
				temp = temp / 10;
			}
		}
		FROM(i, counter) {
			sum += fact[i];
		}
		cout << sum << endl;
	}
	return 0;
}
```

# 10222 - Decode the Mad man.cpp 

```cpp
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
   string keyboard_char  = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
   char word;
    while (scanf("%c",&word) != EOF) {
        word = tolower(word);
        if (isspace(word))
            cout << word;
        else{
            for (int i = 0; keyboard_char[i]; ++i)
                if (word == keyboard_char[i]){
                    cout << keyboard_char[i - 2];
                    break;
                }
        }
    }
    return 0;
}
```

# 10235 - Simply Emirp.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
inline int rev(int n) {
	int s = 0;
	while (n != 0) {
		s *= 10;
		s += n % 10;
		n /= 10;
	}
	return s;
}
int main()
{
	int num;
	while (cin >> num) {
		bool prime = false;
		if (num == 1) {
			cout << num << " is not prime." << endl;
			continue;
		}
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				prime = true;
				break;
			}
		}
		if (!prime) {
			if (num <= 9) {
				cout << num << " is prime." << endl;
				continue;
			}
		}
		if (!prime) {
			bool ans = false;
			int n = rev(num);
			if (n == num) {
				cout << num << " is prime." << endl;
				continue;
			}
			for (int i = 2; i <= n / 2; i++) {
				if (n % i == 0) {
					ans = true;
					break;
				}
			}
			if (ans)
				cout << num << " is prime." << endl;
			else
				cout << num << " is emirp." << endl;
		}
		else
			cout << num << " is not prime." << endl;
	}
	return 0;
}
```

# 10252 - Common Permutation.cpp 

```cpp
#include<set>
#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str1, str2;
	while (getline(cin, str1) && getline(cin, str2))
	{
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		int i = 0, j = 0;

		while (i < str1.size() && j < str2.size())
		{
			if (str1[i] == str2[j]) {
				cout << char(str1.at(i));
				  i++;
					j++;
			}
			else {
				if (str1[i] > str2[j])
					j++;
				else
					i++;
			}
		}
		cout << endl;
	}
	return 0;
}
```

# 10281 - Average Speed.cpp 

```cpp
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef  long double  ldb;
typedef long long ll;

int main() {
    cout << setprecision(2) << fixed << setfill('0');
    int hour, minute, second;
    ldb distance = 0, cdistance = 0;
    ll current_time = 0, previous_time = 0, velocity = 0;
    while (scanf("%d:%d:%d", &hour, &minute, &second) == 3) {
        current_time = hour * 3600 + minute * 60 + second;
        ll total_time = abs(previous_time - current_time) ;
        cdistance = (float) velocity * (total_time / 3600.0);
        if (cin.peek() == ' ') {
            previous_time = current_time;
            distance += cdistance;
            cin >> velocity;
        } else
            cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << " "
                 << distance + cdistance << " km" << endl;
    }
    return 0;
}
```
