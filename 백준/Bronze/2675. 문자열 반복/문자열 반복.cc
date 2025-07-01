#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	int R;
	char S[21];
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (int j = 0; S[j] != '\0'; j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << S[j];
			}
		}
		cout << '\n';
	}

	return 0;
}