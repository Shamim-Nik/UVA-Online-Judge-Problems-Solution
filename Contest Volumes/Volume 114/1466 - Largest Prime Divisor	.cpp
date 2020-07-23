#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define print(next) cout << next << endl;

int main ()
{
    ll num;
    while (cin >> num) {
        if (num == 0)
            break;
        ll count = 0, i , n = llabs(num), cnt = 0, next = 0;
        for (i = 2; i * i < llabs(num); i++) {
            while (n % i == 0) {
                if (next != i)
                    cnt++;
                next = i;
                n /= i;
            }
        }
        if (n != 1)
            cnt++,
            next = llabs(n);
        if (cnt > 1) {
            print(next);
        }
        else
            print(-1);
    }
    return 0;
}
