#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	for (char& c : s)
	{
		if (c <= 'C')
			c += 26;
		c -= 3;
	}
	cout << s;
}