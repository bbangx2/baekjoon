#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector <int> v;
		for (int j = 0; j < 7; j++)
		{
			int a;
			cin >> a;
			if (!(a % 2))
				v.push_back(a);
		}
		int sum = 0;
		for (int j = 0; j < v.size(); j++)
		{
			sum += v[j];
		}
		sort(v.begin(), v.end());
		cout << sum << ' ' << v[0] << endl;
	}

}