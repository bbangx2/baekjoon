#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector <int> v(N);
	int coin = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	
	while (K)
	{
		int max = 0;
		for (int i = N - 1; i >= 0; i--)
		{
			max = v[i];
			if (max <= K)
			{
				break;
			}
		}
		K -= max;
		coin++;
	}
	cout << coin << endl;
	
}