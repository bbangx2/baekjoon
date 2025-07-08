#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int x = 0, y = 0;

	if (!a)
	{
		y = c / b;
		x = (f - e * y) / d;
	}
	else
	{
		int a2, b2, c2, d2, e2, f2;
		a2 = a * d;
		b2 = b * d;
		c2 = c * d;
		d2 = a * d;
		e2 = a * e;
		f2 = a * f;
		y = (c2 - f2) / (b2 - e2);
		x = (c - y * b) / a;
	}
	

	cout << x << ' ' << y;


	return 0;
}