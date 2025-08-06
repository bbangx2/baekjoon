#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x;
	while (cin >> x)
	{
		int n;
		cin >> n;

		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}

		x *= 10000000;
		int targ = x - v[0];
		int flag = 0;
		sort(v.begin(), v.end());

		int l = 0, r = n - 1;
		while (l < r) {
			int sum = v[l] + v[r];
			if (sum == x) {
				flag = 1;
				cout << "yes " << v[l] << ' ' << v[r] << '\n';
				break;
			}
			else if (sum < x) {
				l++;
			}
			else {
				r--;
			}
		}

		if (!flag)
			cout << "danger" << '\n';
	}
	
}