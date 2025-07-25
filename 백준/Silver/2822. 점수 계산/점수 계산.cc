#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, int>> v(8);

	for (int i = 0; i < 8; i++)
	{
		cin >> v[i].first;
		v[i].second = i + 1;
	}

	sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		return a.first > b.first;
		});

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += v[i].first;
	}
	cout << sum << endl;

	sort(v.begin(), v.begin() + 5, [](const pair<int, int>& a, const pair<int, int>& b) {
		return a.second < b.second;
		});
	for (int i = 0; i < 5; i++)
	{
		cout << v[i].second << ' ';
	}

}