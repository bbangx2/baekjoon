#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum = 0;

	map<int, int> counts;

	int max_count = 0;
	int mode = 0;

	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		sum += a;

		counts[a]++;

		if (counts[a] > max_count)
		{
			max_count = counts[a];
			mode = a;
		}
	}

	cout << sum / 10 << endl << mode;
}