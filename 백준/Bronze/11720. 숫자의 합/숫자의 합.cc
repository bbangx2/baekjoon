#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	char c[101];
	cin >> c;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += (int)c[i] - (int) '0';
	}
	cout << sum;

	return 0;
}