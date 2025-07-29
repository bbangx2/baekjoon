#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin, s);

	for (unsigned char c : s)
	{
		if (c >= 'A' && c <= 'Z')
		{
			c += 13;
			if (c > 'Z')
				c -= 26;
			cout << c;
		}
		else if (c >= 'a' && c <= 'z')
		{
			c += 13;
			if (c > 'z')
				c -= 26;
			cout << c;
		}
		else
			cout << c;
	}
	
}