#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long X;
	cin >> X;
	long X2 = X;

	int flag = 1;

	while (X >= 2)
	{
		X2 = X - 1;
		X -= ++flag;
	}
	long a = 0;
	long b = flag + 1;
	for (int i = 0; i < X2; i++)
	{
		a++;
		b--;
	}
	if (flag % 2)
		cout << b << '/' << a;
	else
		cout << a << '/' << b;
	
	
}