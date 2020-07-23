#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i, n) for (int i = 0; i < n; i++)

int main()
{
	int N, Q, p = 0;
	while (cin >> N >> Q) {
		if (N == 0 && Q == 0) 
			break;
		vector <int>number_of_marbles;
		vector <int>number_of_queries;
		FOR(i, N) {
			int value;
			cin >> value;
			number_of_marbles.push_back(value);
		}
		FOR(i, Q) {
			int value;
			cin >> value;
			number_of_queries.push_back(value);
		}
		
		cout << "CASE# " << ++p << ":" << endl;
		sort(number_of_marbles.begin(), number_of_marbles.end());
		FOR(i, number_of_queries.size()) {
			bool ans = false;
			for (int j = 0; j < number_of_marbles.size(); j++) {
				if (number_of_queries[i] == number_of_marbles[j]) {
					ans = true;
					cout << number_of_queries[i] << " found at " << j + 1 << endl;
					break;
				}
				else {
					ans = false;
				}
			}
			if (!ans)
				cout << number_of_queries[i] << " not found" << endl;
		}
		number_of_marbles.clear(); number_of_queries.clear();
	}
	return 0;
}
