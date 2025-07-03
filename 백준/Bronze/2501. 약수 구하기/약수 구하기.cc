#include <iostream>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	int num = 0;
	int ary[10000] = { 0 };

	for (int i = 1; i <= N; i++)
	{
		if (!(N % i))
		{
			ary[num] = i;
			num++;
		}
	}
	cout << ary[K-1];
}