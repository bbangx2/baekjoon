#include <iostream>

using namespace std;

int main() {
	int date;
	cin >> date;

	int vio = 0;

	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		if (a % 10 == date)
			vio++;
	}
	cout << vio;
}