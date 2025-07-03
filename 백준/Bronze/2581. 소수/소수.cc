#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	int ary[10000];
	memset(ary, -1, sizeof(int) * 10000);
	
	int sum = 0;
	int idx = 0;
	int a = 0;

	for (int i = M; i <= N; i++)
	{
		if (i > 1)
		{
			for (int j = 1; j < i; j++)
			{
				if (!(i % j))
				{
					a++;
				}
			}
			if (a == 1)
			{
				ary[idx] = i;
				sum += ary[idx++];
			}
			a = 0;
		}
	}
	if (sum)
		cout << sum << endl << ary[0];
	else
		cout << ary[0];
}