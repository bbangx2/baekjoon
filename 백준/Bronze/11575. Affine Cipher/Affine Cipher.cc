#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		string s;
		cin >> s;

		for (char& c : s)
		{
			c = ((a * (int)(c - 'A') + b) % 26) + 'A';
		}
		cout << s << endl;
	}

}