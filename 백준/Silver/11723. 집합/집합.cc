#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int se = 0;

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;

		if (s == "add")
		{
			int b;
			cin >> b;
			se |= (1 << b);
		}
		else if (s == "check")
		{
			int b;
			cin >> b;
			cout << ((se & (1 << b)) ? 1 : 0) << '\n';
		}
		else if (s == "remove")
		{
			int b;
			cin >> b;
			se &= ~(1 << b);
		}
		else if (s == "toggle")
		{
			int b;
			cin >> b;
			se ^= (1 << b);
		}
		else if (s == "all")
		{
			se = (1 << 21) - 2;
		}
		else if (s == "empty")
		{
			se = 0;
		}
	}

}