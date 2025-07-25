#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> score;

	int max = 0;
	int max_idx = 0;

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		score[i] = sum;

		if (score[i] > max)
		{
			max = score[i];
			max_idx = i;
		}
	}

	cout << max_idx + 1 << ' ' << score[max_idx];
}