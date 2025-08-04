#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	for (char& c : s)
	{
		if (c == 'C' || c == 'A' || c == 'M' || c == 'B' ||
			c == 'R' || c == 'I' || c == 'D' || c == 'G' || c == 'E')
			continue;
		else
			cout << c;
	}

}