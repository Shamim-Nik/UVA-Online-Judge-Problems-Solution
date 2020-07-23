#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, Arr[3001], i;
	while (cin >> n)
	{
		for (i = 0; i < n; i++)
			cin >> Arr[i];
		int mark[3001] = { 0 }, flag = 0;

		for (i = 1; i < n; i++) {
			if (abs(Arr[i] - Arr[i - 1]) < n)
				mark[abs(Arr[i] - Arr[i - 1])]++;
		}

		for (i = 1; i < n; i++)
			if (mark[i] == 0)
				flag = 1;
		if (flag)
			cout << "Not jolly" << endl;
		else
			cout << "Jolly" << endl;
	}
	return 0;
}
