#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets "
			<< a % b << " piece(s)." << endl;
	}
	return 0;
}