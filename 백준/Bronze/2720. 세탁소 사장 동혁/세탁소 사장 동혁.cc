#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	int* chg = new int[T];
	int q, d, n, p;
	for (int i = 0; i < T; i++)
	{
		cin >> chg[i];
		q = chg[i] / 25;
		d = chg[i] - 25 * q;
		n = d - 10 * (d / 10);
		p = chg[i] % 5;
		printf("%d %d %d %d\n",
			q, d / 10, n / 5, p);
	}

	delete[] chg;
}