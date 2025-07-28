#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	
	vector<int> v(26, 0);

	for (char c : s)
	{
		int a = (int)(c - 'a');
		v[a] += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << v[i] << ' ';
	}
}