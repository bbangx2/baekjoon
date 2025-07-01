#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int t_time = 0;

	for (int i = 0; i < len; i++)
	{
		if ((s[i] == 'A') || (s[i] == 'B') || (s[i] == 'C'))
			t_time += 3;
		else if ((s[i] == 'D') || (s[i] == 'E') || (s[i] == 'F'))
			t_time += 4;
		else if ((s[i] == 'G') || (s[i] == 'H') || (s[i] == 'I'))
			t_time += 5;
		else if ((s[i] == 'J') || (s[i] == 'K') || (s[i] == 'L'))
			t_time += 6;
		else if ((s[i] == 'M') || (s[i] == 'N') || (s[i] == 'O'))
			t_time += 7;
		else if ((s[i] == 'P') || (s[i] == 'Q') || (s[i] == 'R') || (s[i] == 'S'))
			t_time += 8;
		else if ((s[i] == 'T') || (s[i] == 'U') || (s[i] == 'V'))
			t_time += 9;
		else
			t_time += 10;
	}
	cout << t_time;

	return 0;
}