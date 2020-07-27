# 10656 - Maximum Sum (II).cpp 

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int size;
	while(cin >> size) {
		if (size == 0)
			break;		
		int zero = 0;
		vector<int> value;
		for (int i = 0; i < size; i++) {
			int val;
			cin >> val;
			if (val > 0)
				value.push_back(val);
			else 
				zero += 1;
		}
		if (zero == size) {
			cout << 0 << endl;
			continue;
		}
		else {
			int i = 0;
			for (i = 0; i < value.size() - 1; i++) {
					cout << value[i] << " ";									
			}
			cout << value[i];
		}
		cout << endl;
	}
	return 0;
}
```

# 10696 - f91.cpp 

```cpp
#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    int num;
    while (cin >> num) {
        if (num == 0)
            return 0;
        cout << "f91(" << num << ") = ";
        if (num >= 101)
            cout << num - 10 << endl;
        else
            cout << 91 << endl;
    }
    return 0;
}
```
