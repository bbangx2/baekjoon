#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int a, b;

	a = ((w - x) < x) ? w - x : x;
	b = ((h - y) < y) ? h - y : y;

	cout << ((a > b) ? b : a);

}