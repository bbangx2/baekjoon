#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	set<int> s;
	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		s.insert(a);
	}

	int x;
	cin >> x;

	v.assign(s.begin(), s.end());

	int pair = 0;

	for (int i = 0; i < N; i++)
	{
		int targ = x - v[i];
		auto it = s.find(targ);
		if (it != s.end())
		{
			pair++;
		}
	}
	pair /= 2;
	cout << pair;
	
	return 0;
}