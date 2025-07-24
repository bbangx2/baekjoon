#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int num = A * B;

	while (B != 0)
	{
		int r = A % B;
		A = B;
		B = r;
	}

	int gcd = A;
	int lcm = num / A;

	cout << gcd << endl << lcm;

	return 0;

}