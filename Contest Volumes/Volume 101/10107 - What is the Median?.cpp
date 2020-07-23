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
