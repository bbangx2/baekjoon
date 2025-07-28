#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();

	while (N--)
	{
		string s;
		getline(cin, s);

		s[0] = toupper(s[0]);
		cout << s << endl;
	}
	
}