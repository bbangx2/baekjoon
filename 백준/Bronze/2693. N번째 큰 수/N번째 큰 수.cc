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
		vector <int> v(10);
		for (int j = 0; j < 10; j++)
			cin >> v[j];
		sort(v.begin(), v.end(), [](int a, int b) {
			return a > b;
			});

		cout << v[2] << '\n';
	}
}