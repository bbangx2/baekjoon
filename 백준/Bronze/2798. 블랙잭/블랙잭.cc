#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> cards(N);
	for (int i = 0; i < N; i++)
	{
		cin >> cards[i];
	}

	int result = 0;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = cards[i] + cards[j] + cards[k];
				if (sum <= M)
					result = max(result, sum);
			}
		}
	}

	cout << result;

	return 0;
}