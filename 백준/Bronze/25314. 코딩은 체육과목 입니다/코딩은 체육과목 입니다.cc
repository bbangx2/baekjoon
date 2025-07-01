#include <iostream>  
using namespace std;  

int main()  
{  
	int N;
	cin >> N;

	for (int i = 0; i < (N - 1) / 4 + 1; i++)
	{
		cout << "long ";
	}
	cout << "int" << endl;

	return 0;  
}