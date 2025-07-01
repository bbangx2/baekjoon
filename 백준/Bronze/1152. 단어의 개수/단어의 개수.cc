#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	int wrd = 1;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ')
			wrd++;
	}
	if (s[0] == ' ')
		wrd--;
	if (s[len - 1] == ' ')
		wrd--;

	cout << wrd;

	return 0;
}