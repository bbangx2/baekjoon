#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		vector<int> v(10, 0);

		for (char c : s)
		{
			int a = (int)(c - '0');
			v[a]++;
		}

		int res = 0;
		for (int i = 0; i < 10; i++)
		{
			if (v[i])
				res++;
		}

		cout << res << '\n';
	}

}