#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;

	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
			sum1 += j;
		sum2 += (i + 1) * i;
	}
	
	cout << sum1 + sum2;
	
	return 0;
}