#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		string s;
		getline(cin, s);
		if (s == "END")
			break;
		
		int len = s.size();
		for (int i = len - 1; i >= 0; i--)
		{
			cout << s[i];
		}
		cout << '\n';
	}
}