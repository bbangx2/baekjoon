#include <iostream>  
using namespace std;  

int main()  
{  
	long X;
	cin >> X;
	int* N = new int;
	cin >> *N;

	int* a = new int[*N];
	int* b = new int[*N];
	int sum = 0;

	for (int i = 0; i < *N; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < *N; i++)
	{
		sum += a[i] * b[i];
	}
	cout << ((X == sum) ? "Yes" : "No") << endl;

	delete N;

	return 0;  
}