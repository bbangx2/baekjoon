#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int min = -1, max = -1;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;

		if (min == -1)
			min = a;
		if (max == -1)
			max = a;

		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	cout << min * max;
}