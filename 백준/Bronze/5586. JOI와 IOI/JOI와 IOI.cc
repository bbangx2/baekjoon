#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	int joi = 0;
	int ioi = 0;

	for (int i = 0; i < s.length() - 2; i++)
	{
		if (s.substr(i, 3) == "JOI")
			joi++;
		else if (s.substr(i, 3) == "IOI")
			ioi++;
	}
	cout << joi << '\n' << ioi;

}