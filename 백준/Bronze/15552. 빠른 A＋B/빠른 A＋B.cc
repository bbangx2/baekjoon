#include <iostream>  
using namespace std;  

int main()  
{  
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int* T = new int;
	cin >> *T;
	int A, B;

	for (int i = 0; i < *T; i++)
	{
		cin >> A >> B;
		cout << A + B << '\n';
	}

	delete T;

	return 0;  
}