#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int ary[100] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> ary[i];
	}
	int num = 0;
	int a = 0;
	for (int i = 0; i < N; i++)
	{
		if (ary[i] > 1)
		{
			for (int j = 1; j < ary[i]; j++)
			{
				if (!(ary[i] % j))
				{
					num++;
				}
			}
		}
		if (num == 1)
		{
			a++;
		}
		num = 0;
	}
	cout << a;
}