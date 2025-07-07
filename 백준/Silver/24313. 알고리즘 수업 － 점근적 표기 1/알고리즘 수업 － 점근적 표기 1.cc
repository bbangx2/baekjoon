#include <iostream>
using namespace std;

int main(){

	int a, b;
	cin >> a >> b;

	int c, d;
	cin >> c >> d;
	cout << (((c * d) >= (a * d + b)) && ((c * 100) >= (a * 100 + b)));

	return 0;
}