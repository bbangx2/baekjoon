#include <iostream>  
using namespace std;  

int main()  
{  
	int N;
	cin >> N;

	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int max = A[0];
	int min = A[0];
	for (int i = 0; i < N - 1; i++)
	{
		if (max < A[i + 1])
			max = A[i + 1];
		if (min > A[i + 1])
			min = A[i + 1];
	}

	cout << min << ' ' << max;

	delete[] A;
	return 0;  
}