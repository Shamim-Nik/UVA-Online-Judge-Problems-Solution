# 713 - Adding Reversed.cpp
```cpp
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define mset(Arr) memset(Arr,0,sizeof(Arr))
#define FOR(i,len) for(i = 0; i < len; i++)
void calculation(string, string);

int main()
{
	int test_case;
	while (cin >> test_case)
	{
		string str1, str2;
		while (test_case--)
		{
			cin >> str1 >> str2;
			calculation(str1, str2);
			cout << endl;
		}
	}
	return 0;
}
void calculation(string str1, string str2)
{
	ll Arr[204], len, i = 0, j;
	mset(Arr);
	FOR(i, str1.size())
	{
		Arr[i] += str1.at(i) - '0';
	}
	FOR(i, str2.size())
	{
		Arr[i] += str2.at(i) - '0';
	}
	len = str1.size() > str2.size() ? str1.size() : str2.size();
	for (j = 0; j <= len + 1; j++)
	{
		Arr[j + 1] += Arr[j] / 10;
		Arr[j] %= 10;
	}
	for(j = len + 1; j >= 0; j--)
		if(Arr[j])
			break;
	if(j < 0)
		j++;
	i = 0;
	while(Arr[i] == 0) 
		i++;
	while(i <= j)
			cout << Arr[i++];
}
```

# 755 - 487–3279.cpp
```cpp
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define FOR(i, len) for (int i = 0; i < len; i++)

int main() {
    int test_case;
    cin >> test_case;
    while (test_case--) {
        int number_of_telephone, cnt = 0;
        cin >> number_of_telephone;
        string telephone_number;
        map<string, int> ans;
		bool duplicate = true;
        while (number_of_telephone--) {        	
            cin >> telephone_number;
            char convert_telephone_number[telephone_number.size() + 2];
            int j = 0;
            FOR(i, telephone_number.size()) {
                if (j == 3)
                    convert_telephone_number[j++] = '-';
                if (isalnum(telephone_number[i])) {
                    if (isdigit(telephone_number[i]))
                        convert_telephone_number[j++] = telephone_number[i];
                    else if (telephone_number[i] >= 'A' && telephone_number[i] <= 'C')
                        convert_telephone_number[j++] = '2';
                    else if (telephone_number[i] >= 'D' && telephone_number[i] <= 'F')
                        convert_telephone_number[j++] = '3';
                    else if (telephone_number[i] >= 'G' && telephone_number[i] <= 'I')
                        convert_telephone_number[j++] = '4';
                    else if (telephone_number[i] >= 'J' && telephone_number[i] <= 'L')
                        convert_telephone_number[j++] = '5';
                    else if (telephone_number[i] >= 'M' && telephone_number[i] <= 'O')
                        convert_telephone_number[j++] = '6';
                    else if (telephone_number[i] >= 'P' && telephone_number[i] <= 'S' && telephone_number[i] != 'Q')
                        convert_telephone_number[j++] = '7';
                    else if (telephone_number[i] >= 'T' && telephone_number[i] <= 'V')
                        convert_telephone_number[j++] = '8';
                    else if (telephone_number[i] >= 'W' && telephone_number[i] <= 'Y')
                        convert_telephone_number[j++] = '9';
                }
            }
            convert_telephone_number[j] = '\0';
            ans[convert_telephone_number]++;
        }
        for(map<string, int>:: iterator it = ans.begin(); it != ans.end(); it ++) {
        	if (it->second > 1) {
				duplicate = false;
        		cout << it->first << " " << it->second << endl;
			}
		}
		if (duplicate == true)
			cout << "No duplicates." << endl;
		if(test_case)
		cout << endl;
    }
    return 0;
}
```
