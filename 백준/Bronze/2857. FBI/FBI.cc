#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;

	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < s.size() - 2; j++)
		{
			if (s.substr(j, 3) == "FBI")
			{
				v.push_back(i + 1);
				break;
			}
		}
	}
	if (v.empty())
		cout << "HE GOT AWAY!" << endl;
	else
	{
		for (int i : v)
		{
			cout << i << ' ';
		}
	}
	
}