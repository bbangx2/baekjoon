#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num;
	cin >> num;

	int a;

	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		num -= a;
	}
	cout << num;

	return 0;

}