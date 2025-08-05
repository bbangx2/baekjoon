#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int res = 0;
	int a = 0;
	int M = 0;

	a = N % 5;
	res = N / 5;
	M = N - res * 5;

	if (N > 5 && (M == 1 || M == 4))
	{
		M += 5;
		res -= 1;
	}
	else if (N > 10 && M == 2)
	{
		M += 10;
		res -= 2;
	}
	if (M % 3) cout << -1;
	else
	{
		res += M / 3;
		cout << res;
	}

}