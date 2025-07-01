#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[101];
	cin >> c;

	int num;
	int a[26];
	memset(a, -1, sizeof(a));

	for (int i = 0; c[i] != '\0'; i++)
	{
		num = (int)c[i] - (int)'a';
		if (a[num] == -1)
		{
			a[num] = i;
		}
	}
	for (int i = 0; i < 26; i++)
		cout << a[i] << ' ';

	return 0;
}