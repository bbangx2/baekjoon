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
        vector<int> v(5);
		for (int j = 0; j < 5; j++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end(), [](int a, int b) {
			return a > b;
			});
		if ((v[1] - v[3]) >= 4)
			cout << "KIN" << endl;
		else
			cout << v[1] + v[2] + v[3] << endl;
	}
}