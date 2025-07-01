#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;  

int main()  
{  
	int N, M;
	cin >> N >> M;

	int* ary = new int[N];
	int* ary2 = new int[N];
	for (int i = 0; i < N; i++)
	{
		ary[i] = i + 1;
		ary2[i] = i + 1;
	}


	int i, j;
	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;
		for (int l = 0; l < j - i + 1; l++)
		{
			ary2[i + l - 1] = ary[j - l - 1];
		}
		for (int m = 0; m < N; m++)
			ary[m] = ary2[m];
	}
	
	for (int m = 0; m < N; m++)
		cout << ary[m] << ' ';
	
	delete[] ary;
	delete[] ary2;

	return 0;  
}