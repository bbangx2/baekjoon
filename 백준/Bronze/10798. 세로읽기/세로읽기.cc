#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i];
	}

	int s_len[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		s_len[i] = s[i].length();
	}

	int max_len = s_len[0];
	for (int i = 0; i < 5; i++)
	{
		if (max_len < s_len[i])
			max_len = s_len[i];
	}


	for (int i = 0; i < max_len; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < s_len[j])
				cout << s[j][i];
		}

	}

	return 0;
}