#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << b - a + 2 << endl;
	}
	return 0;
}