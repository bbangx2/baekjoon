#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> v(9);

	for (int i = 0; i < 9; i++)
	{
		v[i].first = i + 1;
		cin >> v[i].second;
	}

	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		sum += v[i].second;
	}
	sum -= 100;

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
		return a.second < b.second;
		});
	
	int a = 0, b = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (v[i].second + v[j].second == sum)
			{
				a = v[i].first;
				b = v[j].first;
					
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (v[i].first != a && v[i].first != b)
			cout << v[i].second << endl;
	}
}