#100 - The 3n + 1 problem.cpp
```cpp
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int num1, num2;
	while (scanf("%d %d", &num1, &num2) == 2)
	{
		int mx = 0;
		int x = max(num1, num2);
		int y = min(num1, num2);
		for (int i = y; i <= x; i++)
		{
			int num = i, cnt = 1;
			while (num > 1)
			{
				if (num % 2)
					num = 3 * num + 1;
				else
					num /= 2;
				cnt++;
			}
			if (cnt >= mx)
				mx = cnt;
		}
		cout << num1 << " " << num2 << " " << mx << endl;
	}
	return 0;
}
```

#102 - Ecological Bin Packing.cpp
```cpp
#include<cstdio>
#include<cstring>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long  l;

int main()
{
	l A[3], B[3], C[3],bin[6];
	string ans;
	memset(bin, 0, sizeof(bin));
	while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&A[0],&B[0],&C[0],&A[1],&B[1],&C[1],&A[2],&B[2],&C[2])==9)
	{
		bin[0] = A[1] + A[2] + B[0] + B[1] + C[0] + C[2]; //BCG
		bin[1] = A[1] + A[2] + B[0] + B[2] + C[0] + C[1]; //BGC
		bin[2] = A[0] + A[2] + B[0] + B[1] + C[1] + C[2]; //CBG
		bin[3] = A[0] + A[1] + B[0] + B[2] + C[1] + C[2]; //CGB
		bin[4] = A[0] + A[2] + B[1] + B[2] + C[0] + C[1]; //GBC
		bin[5] = A[0] + A[1] + B[1] + B[2] + C[0] + C[2]; //GCB

		l minimum = bin[0];
		for (l i = 1; i < 6; i++)
			if (bin[i] < minimum)
				minimum = bin[i];

		for (l i = 0; i < 6; i++)
			if (bin[i] == minimum)
			{
				if (i == 0)
					ans = "BCG";
				else if (i == 1)
					ans = "BGC";
				else if (i == 2)
					ans = "CBG";
				else if (i == 3)
					ans = "CGB";
				else if (i == 4)
					ans = "GBC";
				else if (i == 5)
					ans = "GCB";
				break;
			}
		std::cout << ans << " " << minimum << std::endl;
	}
	return 0;
}
```

#108 - Maximum Sum.cpp
```cpp
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[100][100];
    int N,ans;
    int sum[100][101];
    int dp[101];

    while(scanf("%d",&N)==1){
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                scanf("%d",&matrix[i][j]);

        for(int i=0;i<N;i++){
            sum[i][0]=0;
            for(int j=1;j<=N;j++)
                sum[i][j]=sum[i][j-1]+matrix[i][j-1];
        }

        memset(dp,0,sizeof(dp));
        ans=-(1<<30);

        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                for(int k=0;k<N;k++){
                    dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k]
                                ,sum[k][j+1]-sum[k][i]);
                    ans=max(ans,dp[k+1]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
```

# 113 - Power of Cryptography.cpp
```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long double ld;
#define br() cout << endl;

int main()
{
	int n;
	ld p;
	bool br = false;
	while (cin >> n >> p)
		cout << fixed << setprecision(0) << pow(p,1.0/n),
		br();
	return 0;
}
```

# 136 - Ugly Numbers.cpp
```cpp
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t2 = 0, t3 = 0, t5 = 0, tmp;
	int DP[1500] = { 1 };
	for (int i = 1; i < 1500; i++) {
		while (DP[t2] * 2 <= DP[i - 1])
			t2++;
		while (DP[t3] * 3 <= DP[i - 1])
			t3++;
		while (DP[t5] * 5 <= DP[i - 1])
			t5++;
		tmp = DP[t2] * 2;
		if (DP[t3] * 3 < tmp)
			tmp = DP[t3] * 3;
		if (DP[t5] * 5 < tmp)
			tmp = DP[t5] * 5;
		DP[i] = tmp;
	}
	cout << "The 1500'th ugly number is " << DP[1499] << "." << endl;
	return 0;
}
```

# 138 - Street Numbers.cpp
```cpp
#include<vector>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int house_number[] = { 6,35,204,1189,6930,40391,235416,1372105,7997214,46611179 };
	int last_number[] = { 8,49,288,1681,9800,57121,332928,1940449 ,11309768 ,65918161 };
	for (int i = 0; i < 10; i++)
		cout << setw(10) << house_number[i] << setw(10) << last_number[i],
		cout << endl;
	return 0;
}
```

# 146 - ID Codes.cpp
```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

bool ans (string& s) {
	if(next_permutation(s.begin(), s.end()))
		return true;
	else 
		return false;
}

int main()
{
	string str;
	
	while (cin >> str && str !="#") {
		if (ans(str))
			cout << str << endl;
		else
			cout << "No Successor" << endl;
	}
	return 0;
}
```

# 156 - Ananagrams.cpp
```cpp
#include <cctype>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <map>
using namespace std;
string lower(string ch) {
	for (auto& i : ch)
			i = tolower(i);
	sort(ch.begin(), ch.end());
	return ch;
}
int main() {
	string str;
	set<string> word;
	map<string, int> temp;
	while (cin >> str && str != "#") 
		++temp[lower(str)],
		word.insert(str);
	for (auto& i : word)
		if (temp[lower(i)] == 1) 
			cout << i << '\n';
	return 0;
}
```

# 195 - Anagram.cpp
```cpp
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool change(char ch1, char ch2) {
	if (tolower(ch1) == tolower(ch2))
		return ch1 < ch2;
	return tolower(ch1) < tolower(ch2);
}
int main() 
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		string str;
		cin >> str;
		sort(str.begin(), str.end(), change);
		cout << str << endl;
		int len = str.size();
		while (next_permutation(str.begin(), str.end(), change))
			cout << str << endl;
	}
	return 0;
}
```
