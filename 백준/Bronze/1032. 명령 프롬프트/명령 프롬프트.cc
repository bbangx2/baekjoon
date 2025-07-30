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
	vector<string> v(N);
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		v[i] = s;
	}

	for (int i = 0; i < v[0].size(); i++)
	{
		int flag = 0;
		for (int j = 0; j < N - 1; j++)
		{
			if (v[j][i] != v[j + 1][i])
			{
				cout << '?';
				flag = 1;
				break;
			}
		}
		if (!flag)
			cout << v[0][i];
	}
}