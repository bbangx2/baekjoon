#include <iostream>
#include <string>
using namespace std;

int main()
{
	int back[100][100] = { 0 };

	int N;
	cin >> N;

	int x[100] = { 0 };
	int y[100] = { 0 };
	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = x[i]; j < x[i] + 10; j++)
		{
			for (int k = y[i]; k < y[i] + 10; k++)
			{
				back[j][k] = 1;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			sum += back[i][j];
		}
	}
	cout << sum;

	return 0;
}