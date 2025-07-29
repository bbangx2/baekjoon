#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		int len = s1.size();
		cout << "Distances: ";
		for (int i = 0; i < len; i++)
		{
			cout << (((int)s1[i] <= (int)s2[i]) ? ((int)s2[i] - (int)s1[i]) : ((int)s2[i] - (int)s1[i]) + 26)<< ' ';
		}
		cout << '\n';
	}
}