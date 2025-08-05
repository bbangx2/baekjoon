#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	getline(cin, s);

	int happy = 0, sad = 0;

	for (int i = 0; i < s.size() - 2; i++)
	{
		if (s[i] == ':')
		{
			if (s[i + 1] == '-')
			{
				if (s[i + 2] == ')')
				{
					happy++;
				}
				else if (s[i + 2] == '(')
				{
					sad++;
				}
			}
		}
	}
	if (!happy && !sad) cout << "none" << endl;
	else if (happy > sad) cout << "happy" << endl;
	else if (sad > happy) cout << "sad" << endl;
	else if (happy == sad) cout << "unsure" << endl;
}