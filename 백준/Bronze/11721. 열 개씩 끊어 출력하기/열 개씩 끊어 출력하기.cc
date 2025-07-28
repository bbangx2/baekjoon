#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	int len = s.size();
	int flag = 0;
	int fflag = 0;
	while (1)
	{
		static int a = 0;
		for (int i = a; i < a + 10; i++)
		{
			flag++;
			if (flag > len)
			{
				fflag = 1;
				break;
			}
			cout << s[i];
		}
		if (fflag)
			break;
		else
		{
			a += 10;
			cout << endl;
		}
	}
}