#include <iostream>
using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	if ((A == B) && (A == C) && (B == C))
		cout << 10000 + A * 1000 << endl;
	else if ((A == B) || (A == C))
		cout << 1000 + A * 100 << endl;
	else if (B == C)
		cout << 1000 + B * 100 << endl;
	else
	{
		int D;
		A > B ? (D = A) : (D = B);
		D > C ? D : (D = C);
		cout << 100 * D << endl;
	}

	return 0;
}