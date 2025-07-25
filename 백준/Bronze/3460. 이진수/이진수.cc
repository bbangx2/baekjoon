#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		int flag = 0;

		while (b)
		{
			if (b % 2)
			{
				cout << flag << ' ';
			}
			flag++;
			b /= 2;
		}
		cout << endl;
	}
}