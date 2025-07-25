#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a;
		string s;
		cin >> a >> s;

		s.erase(a - 1, 1);
		cout << s << endl;
	}
}