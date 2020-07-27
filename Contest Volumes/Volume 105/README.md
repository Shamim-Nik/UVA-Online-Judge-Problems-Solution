# 10523 - Very Easy !!!.cpp 

```cpp
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
	int N,A,a[201],s[201];
	while ( cin >> N >> A ) {
		memset( s, 0, sizeof(s) );
		memset( a, 0, sizeof(a) );
		a[0] = A; s[0] = A;
		for ( int i = 2 ; i <= N ; ++ i ) {
			for ( int j = 0 ; j <= 200 ; ++ j )
				a[j] *= A;
			for ( int j = 0 ; j <= 200 ; ++ j ) {
				a[j+1] += a[j]/10;
				a[j] %= 10;
			}
			for ( int j = 0 ; j <= 200 ; ++ j )
				s[j] += a[j]*i;
			for ( int j = 0 ; j <= 200 ; ++ j ) {
				s[j+1] += s[j]/10;
				s[j] %= 10;
			}
		}
		int end = 200;
		while ( end >= 1 && !s[ end ] ) 
			end --;
		while ( end >= 0 ) 
			cout << s[end--];
		cout << endl;
	}
	return 0;
}
```

# 10533 - Digit Primes.cpp 

```cpp
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#define MAX 1000001
using namespace std;

bool temp[MAX];
int prime_of_digit[MAX];
void function();
void digit_prime();

int main()

{
	function();
	digit_prime();
	int test_case, A, B, cnt, z, digit;
	cin >> test_case;
	while (test_case--)
	{
		cin >> A >> B;
		cnt = prime_of_digit[B] - prime_of_digit[A];
		digit = 0;
		z = A;
		while (z)
		{
			digit += z % 10;
			z /= 10;
		}
		if (temp[A] == 0 && temp[digit] == 0)
			cnt++;
		cout << cnt << endl;
	}
	return 0;
}

void function()
{
	int j, add;
	temp[0] = temp[1] = 1;
	for (int i = 4; i < MAX; i += 2)
		temp[i] = 1;
	for (int i = 3; i < MAX; i += 2)
	{
		if (!temp[i])
		{
			if (MAX / i >= i)
			{
				add = i * 2;
				for (j = i * i; j < MAX; j += add)
					temp[j] = 1;
			}
		}
	}
	return;
}

void digit_prime()
{
	memset(prime_of_digit, 0, sizeof(prime_of_digit));
	int j, k, cnt;
	cnt = 0;
	for (int i = 0; i < MAX; i++)
	{
		j = i;
		k = 0;
		while (j)
		{
			k += j % 10;
			j /= 10;
		}
		if (temp[i] == 0 && temp[k] == 0)
			++cnt;
		prime_of_digit[i] = cnt;
	}
	return;
}
```

# 10550 - Combination Lock.cpp 

```cpp
#include<iostream>
using namespace std;

int main()
{
	int dial, A, B, C, D;
	while (cin >> dial >> A >> B >> C)
	{
		if (dial == 0 && A == 0 && B == 0 && C == 0)
			break;
		int clock = 1080;
		if (A > dial)
			clock += (40 - A + dial)*9;
		else
			clock += (dial - A)*9;
		if (A > B)
			clock += (40 + B - A)*9;
		else
			clock += (B - A)*9;
		if (C > B)
			clock += (40 - C + B)*9;
		else
			clock += (B - C)*9;
		cout << clock << endl;
	}
	return 0;
}
```

# 10579 - Fibonacci Numbers.cpp 

```cpp
#include <iostream>
using namespace std;
int Fibonacci[10001][401] = { 0 };
void ans(int *Fibonacci)
{
	int i = 400;
	while (Fibonacci[i] == 0 && i > 0) i--;
		cout << Fibonacci[i];
	for (int j = i - 1; j >= 0; j--)
	{
		cout.width(3);
		cout.fill('0');
		cout << Fibonacci[j];
	}
	cout << endl;
}
int main()
{
	Fibonacci[0][0] = 0;
	Fibonacci[1][0] = 1;
	for (int i = 2; i < 10001; i++)
	{
		for (int j = 0; j < 400; j++)
		{
			Fibonacci[i][j] = Fibonacci[i - 1][j] + Fibonacci[i - 2][j];
		}
		for (int j = 1; j < 400; j++)
		{
			Fibonacci[i][j] += Fibonacci[i][j - 1] / 1000;
			Fibonacci[i][j - 1] %= 1000;
		}
	}
	int N;
	while (cin >> N) 
		ans(Fibonacci[N]);
	return 0;
}
```

# 10591 - Happy Number.cpp 

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
typedef long l;
bool answer = true;

int main()
{
	int test_case;
	while (cin >> test_case)
	{
		l num, sum = 0, ans, p = 1;
		for (int i = 0; i < test_case; i++) {
			cin >> num;
			ans = num;
			do
			{
				sum = 0;
				while (num > 0)
				{
					l rem;
					rem = num % 10;
					sum += (rem * rem);
					num /= 10;
				}
				num = sum;
				if (sum <= 9) {
					if (sum == 1)
						cout << "Case #" << p << ": " << ans << " is a Happy number." << endl;
					else if (sum != 1)
						cout << "Case #" << p << ": " << ans << " is an Unhappy number." << endl;
					p++;
					break;
				}
			}while (sum != 1);			
		}		
	}
	return 0;
}
```
