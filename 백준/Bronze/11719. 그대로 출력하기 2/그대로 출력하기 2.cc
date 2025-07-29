#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 100; i++)
	{
		string s;
		getline(cin, s);
		cout << s << endl;
	}
	
}