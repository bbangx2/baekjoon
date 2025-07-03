#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long A, B, V;
	cin >> A >> B >> V;

	int a = 0;
	int d = 0;
	
	V -= A;
	a = A - B;
	d = ceil((double)V / a);
	d++;
	cout << d;
}