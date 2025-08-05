#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	long long a = 1, b = 1, c = 2, d = 4, e = 0;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			cout << 1 << '\n';
			continue;
		}
		if (n == 1)
		{
			cout << 1 << '\n';
			continue;
		}
		if (n == 2)
		{
			cout << 2 << '\n';
			continue;
		}
		if (n == 3)
		{
			cout << 4 << '\n';
			continue;
		}
		for (int j = 3; j < n; j++)
		{
			e = a + b + c + d;
			a = b;
			b = c;
			c = d;
			d = e;
		}
		cout << e << '\n';
		a = 1, b = 1, c = 2, d = 4;
	}
	
	
}