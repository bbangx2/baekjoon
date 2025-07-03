#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;


	for (int i = 2; i <= N; i++)
	{
		if (!(N % i))
		{
			cout << i << endl;
			N = N / i;
			i = 1;
		}
	}
}