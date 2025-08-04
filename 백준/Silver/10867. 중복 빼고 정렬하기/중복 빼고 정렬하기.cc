#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v;
	while (N--)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	int old = v[0];
	cout << old << ' ';
	for (int i = 1; i < v.size(); i++)
	{
		if (old != v[i])
			cout << v[i] << ' ';
		old = v[i];
	}
}