#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long N;
	cin >> N;
	int flag = 1;


	while (N >= 2)
	{
		N = N - 6 * flag++;
	}
	
	cout << flag;

}