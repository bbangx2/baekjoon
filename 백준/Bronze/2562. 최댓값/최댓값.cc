#include <iostream>  
using namespace std;  

int main()  
{  
	int A[9] = { 0, };
	
	for (int i = 0; i < 9; i++)
	{
		cin >> A[i];
	}
	int max = A[0];
	int idx = 1;
	for (int i = 0; i < 8; i++)
	{
		if (max < A[i + 1])
		{
			max = A[i + 1];
			idx = i + 2;
		}
	}
	cout << max << '\n' << idx;

	return 0;  
}