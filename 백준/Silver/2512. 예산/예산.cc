#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);

		sum += a;
	}
	int M;
	cin >> M;

	sort(v.begin(), v.end());

	if (sum <= M)
	{
		cout << v[N - 1];
	}
	else
	{
		int idx = 0;
		int sum2 = 0;
		int aver = M / N;
		int aver2 = 0;
		for (int i = 0; i < N; i++)
		{
			sum2 += v[i];
			if (v[i] > aver)
			{
				idx = i;
				aver2 = (M - sum2 + v[i]) / (N - i);
				if (v[i] <= aver2)
				{
					continue;
				}
				break;
			}
		}
		cout << aver2;
	}

	return 0;
}