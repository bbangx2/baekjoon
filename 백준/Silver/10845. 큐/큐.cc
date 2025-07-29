#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	queue<int> v;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		if (!s.compare(0, 4, "push"))
		{
			int a;
			cin >> a;
			v.push(a);
		}
		else if (!s.compare(0, 5, "front"))
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.front() << '\n';
			}
		}
		else if (!s.compare(0, 4, "back"))
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.back() << '\n';
			}
		}
		else if (!s.compare(0, 3, "pop"))
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.front() << '\n';
				v.pop();
			}
		}
		else if (!s.compare(0, 4, "size"))
		{
			cout << v.size() << '\n';
		}
		else if (!s.compare(0, 5, "empty"))
		{
			cout << v.empty() << '\n';
		}
	}

}