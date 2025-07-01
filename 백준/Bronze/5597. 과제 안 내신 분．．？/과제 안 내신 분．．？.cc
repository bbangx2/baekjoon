#include <iostream>  
using namespace std;  

int main()  
{  
	int a[30];
	for (int i = 0; i < 30; i++)
		a[i] = i + 1;
	int b[30] = { 0 };
	int c;
	for (int i = 0; i < 28; i++)
	{
		cin >> c;
		b[c - 1] = 1;
	}
	for (int i = 0; i < 30; i++)
	{
		if (!b[i])
			cout << a[i] << '\n';
	}

	return 0;  
}