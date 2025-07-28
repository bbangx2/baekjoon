#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a, b;
		cin >> a >> b;
		int res = 0;
		vector <int> v(a);
		for (int j = 0; j < a; j++)
		{
			cin >> v[j];
		}
		for (int j = 1; j < a; j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (v[j] == v[k])
				{
					res++;
					break;
				}
			}
		}
		cout << res << endl;
	}
}