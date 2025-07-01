#include <iostream>
using namespace std;

int main()
{
	int hour, min, tmin, thour;

	cin >> hour >> min;
	cin >> tmin;

	thour = hour * 60 + min + tmin;
	min = thour % 60;
	hour = thour / 60 % 24;

	cout << hour << ' ' << min << endl;


	return 0;
}