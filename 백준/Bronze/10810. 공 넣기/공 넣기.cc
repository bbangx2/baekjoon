#include <iostream>  
using namespace std;  

int main()  
{  
	int N, M;
	cin >> N >> M;

	int i[100], j[100], k[100];
	for (int l = 0; l < M; l++)
	{
		cin >> i[l] >> j[l] >> k[l];
	}
	int chk[100] = { 0, };
	for (int m = 0; m < M; m++)
	{
		for (int n = i[m] - 1; n < j[m]; n++)
		{
			chk[n] = k[m];
		}
	}
	for (int o = 0; o < N; o++)
		cout << chk[o] << ' ';

	return 0;  
}