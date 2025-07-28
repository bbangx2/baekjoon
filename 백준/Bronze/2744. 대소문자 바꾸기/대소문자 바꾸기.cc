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

	for (char& c : s)
	{
		if (isupper(c))
			c = tolower(c);
		else if (islower(c))
			c = toupper(c);
	}

	cout << s;
	
	
}