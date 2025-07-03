#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long a = 2;

	for (int i = 0; i < N; i++)
	{
		a += pow(2, i);
	}
	
	cout << setprecision(20) << pow(a, 2);

}