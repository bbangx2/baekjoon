#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int result = 0;

	for (int i = 0; i <= 54; i++)
	{
		int sum = 0;
		int M = N - i;
		int O = M;
		for (int j = 0; j <= 7; j++)
		{
			sum += O % 10;
			O /= 10;
		}
		if ((M + sum) == N)
		{
			result = M;
		}
	}

	if (result)
		cout << result;
	else
		cout << 0;

	return 0;
}