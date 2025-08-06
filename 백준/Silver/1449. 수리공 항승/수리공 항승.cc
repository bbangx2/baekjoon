#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, L;
	cin >> N >> L;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 0; i < N; i)
	{
		double start = v[i] - 0.5;
		int flag = 1;
		ans++;

		if(v[i] + start)
		if (i < v.size() - 1)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (v[j] > start + L)
				{
					i = j;
					flag = 0;
					break;
				}
			}
		}
		if (flag) break;
		
	}
	cout << ans;
}