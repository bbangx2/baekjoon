#include <iostream>  
using namespace std;  

int main()  
{  

	int* N = new int;
	cin >> *N;

	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < *N - 1 - i; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << '*';
		}
		cout << endl;
	}

	delete N;

	return 0;  
}