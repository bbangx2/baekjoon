#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string s1, s2;
	cin >> s1 >> s2;

	if (N % 2)
	{
		for (char& c : s1)
		{
			if (c == '1')
				c = '0';
			else
				c = '1';
		}

		if (s1 == s2)
			cout << "Deletion succeeded";
		else
			cout << "Deletion failed";
	}
	else
	{
		if (s1 == s2)
			cout << "Deletion succeeded";
		else
			cout << "Deletion failed";
	}
}