#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		int a = 0, b = 0;
		a = (int)(s[0] - 'A') * 26 * 26 + (int)(s[1] - 'A') * 26 + (int)(s[2] - 'A');
		b = (int)(s[4] - '0') * 1000 + (int)(s[5] - '0') * 100 + (int)(s[6] - '0') * 10 + (int)(s[7] - '0');
		int sub = a - b;
		sub = abs(sub);
		if (sub <= 100)
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;
	}
}