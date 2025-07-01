#include <iostream>  
using namespace std;  

int main()  
{  

	int* T = new int;
	cin >> *T;
	int A, B;

	for (int i = 0; i < *T; i++)
	{
		cin >> A >> B;
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}

	delete T;

	return 0;  
}