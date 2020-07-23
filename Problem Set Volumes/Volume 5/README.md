# 540 - Team Queue.cpp
```cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

#define br printf("\n")

int main() {
    map<int, int> team;
    bool queued[1010];
    queue<int> team_queue;
    queue<int> teams[1010];
    int t,n,x;
    int s = 1;
    while(cin >> t && t != 0) {
        cout << "Scenario #" << s++ << '\n';
        for (int i = 0; i < t; i++) {
            cin >> n;
            for (int j = 0; j < n; j++) {
                cin >> x;
                team[x] = i;
            }
        }
        char cmd[10];
        while (scanf("%s", cmd) && cmd[0] != 'S') {
            if (cmd[0] == 'E') {
                scanf("%d", &x);
                int tm = team[x];
                if(!queued[tm]) {
                    queued[tm] = true;
                    team_queue.push(tm);
                }
                teams[tm].push(x);
            } else {
                int tm = team_queue.front();
                printf("%d\n", teams[tm].front());
                teams[tm].pop();
                if(teams[tm].empty()) {
                    team_queue.pop();
                    queued[tm] = false;
                }
            }
        }
        puts("");
        team_queue = queue<int>();
        team.clear();
        for (int k = 0; k < t; k++) {
            teams[k] = queue<int>();
            queued[k] = false;
        }
    }
    return 0;
}
```
# 579 - Clock Hands.cpp
```cpp
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef double db;

int main() {

	int hour, minutes;
	while (scanf("%d:%d", &hour, &minutes)) {
		if (hour == 0 && minutes == 0)
			break;
		if (minutes == 0) {
			int angle = abs(hour - 12) * 30;
			if (angle > 180)
				cout << abs(360 - angle) << ".000" << endl;
			else
				cout << angle << ".000" << endl;
		}
		else {
			db angle;
			angle = (hour * 30 + ((db)minutes / 60) * 30) - (minutes * 6);
			if (angle < 0)
				angle *= (-1);
			if (angle > 180)
				cout << fixed << setprecision(3) << (360 - angle) << endl;
			else
				cout << fixed << setprecision(3) << angle << endl;
		}
	}
	return 0;
}
```
# 591 - Box of Bricks.cpp
```cpp
#include<vector>
#include<iostream>
#define FOR(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main()
{
	int size, p = 0;
	while (cin >> size && size != 0) {
		ll total = 0;
		vector<int>Arr;
		FOR(i, size) {
			int value;
			cin >> value;
			Arr.push_back(value);
			total += value;
		}
		int ans = 0, avg = total / size;
		for (int i = 0; i < Arr.size(); i++) {
			if (avg > Arr[i])
				ans += (avg - Arr[i]);
		}
		cout << "Set #" << ++p << endl;
		cout << "The minimum number of moves is " << ans << "." << endl << endl;
	}
	return 0;
}
```
