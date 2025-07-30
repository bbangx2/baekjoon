#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, string>> v;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		int flag = 0;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j].second == s)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
			v.push_back(make_pair(s.size(), s));
	}

	sort(v.begin(), v.end(), [](pair<int, string> a, pair<int, string> b) {
		if (a.first == b.first)
			return a.second < b.second;
		else
			return a.first < b.first;
		});

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].second << '\n';
	}
}