#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int N, M;
		cin >> N >> M;
		int cnt = 0;

		for (int i = N; i <= M; i++)
		{
			string s;
			s = to_string(i);
			for (char c : s)
			{
				if (c == '0')
					cnt++;
			}
		}
		cout << cnt << endl;
	}
	
}