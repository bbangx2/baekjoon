#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	int count = 0;
	for (char c : s)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			count++;
		}
	}
	cout << count;
	
}