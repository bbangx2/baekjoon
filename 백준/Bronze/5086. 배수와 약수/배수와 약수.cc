#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	while (a && b)
	{
		if (!(a % b)) cout << "multiple" << endl;
		else if (!(b % a)) cout << "factor" << endl;
		else cout << "neither" << endl;
		cin >> a >> b;
	}
}