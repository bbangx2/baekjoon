#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long fib0 = 0, fib1 = 1;
	long long fib = 1;
	for (int i = 1; i < n; i++)
	{
		fib = fib1 + fib0;
		fib0 = fib1;
		fib1 = fib;
	}

	cout << fib << endl;

	return 0;

}