#include <iostream>  
using namespace std;  

int main()  
{  
	int* a = new int;  
	cin >> *a; 

	int* b = new int [*a];
	int* c = new int[*a];

	for (int i = 0; i < *a; i++)
	{
		cin >> b[i] >> c[i];
	}

	for (int i = 0; i < *a; i++)
	{
		cout << b[i] + c[i] << endl;
	}

	delete a;
	delete[] b;
	delete[] c;

	return 0;  
}