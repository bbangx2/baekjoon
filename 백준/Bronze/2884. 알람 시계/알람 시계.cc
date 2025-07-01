#include <iostream>
using namespace std;

int main()
{
	int hour, min;

	cin >> hour >> min;

	hour += 24;

	min -= 45;

	if (min >= 0)
		cout << hour % 24 << ' ' << min << endl;
	else
		cout << (hour - 1) % 24 << ' ' << min + 60 << endl;


	return 0;
}