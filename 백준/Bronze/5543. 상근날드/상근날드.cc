#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	vector<int> v;
	v.push_back(a + d - 50);
	v.push_back(b + d - 50);
	v.push_back(c + d - 50);
	v.push_back(a + e - 50);
	v.push_back(b + e - 50);
	v.push_back(c + e - 50);

	sort(v.begin(), v.end());
	cout << v[0];
}