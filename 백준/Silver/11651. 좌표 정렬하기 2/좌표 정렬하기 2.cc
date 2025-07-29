#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> v;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(b, a));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i].second << ' ' << v[i].first << '\n';
	}
}