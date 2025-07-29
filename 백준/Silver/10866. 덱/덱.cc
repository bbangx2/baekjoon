#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	deque<int> v;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		if (!s.compare(0, 10, "push_front"))
		{
			int a;
			cin >> a;
			v.push_front(a);
		}
		else if (!s.compare(0, 9, "push_back"))
		{
			int a;
			cin >> a;
			v.push_back(a);
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
		else if (!s.compare(0, 9, "pop_front"))
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.front() << '\n';
				v.pop_front();
			}
		}
		else if (!s.compare(0, 8, "pop_back"))
		{
			if (v.size() == 0)
				cout << -1 << '\n';
			else
			{
				cout << v.back() << '\n';
				v.pop_back();
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