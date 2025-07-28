#include <iostream>

using namespace std;

int Rev(int);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;

	cin >> a >> b;

	a = Rev(a);
	b = Rev(b);
	int c = a + b;
	c = Rev(c);
	cout << c;


}

int Rev(int a)
{
	int b, c, d, e;
	b = a % 10;
	a /= 10;
	if (!a)
		return b;
	c = a % 10;
	a /= 10;
	if (!a)
		return b * 10 + c;
	d = a % 10;
	a /= 10;
	if (!a)
		return b * 100 + c * 10 + d;
	e = a % 10;
	a /= 10;
		return a = b * 1000 + c * 100 + d * 10 + e;
}