#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	string res;
	res = s[0];

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-')
			res += s[i + 1];
	}
	cout << res;
}