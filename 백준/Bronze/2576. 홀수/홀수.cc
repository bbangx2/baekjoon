#include <iostream>
#include <vector>

using namespace std;


int main() {
	int sum = 0;
	int a = 0;
	int min1 = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> a;
		if (a % 2)
		{
			sum += a;
			static int min2 = a;
			min2 > a ? (min2 = a) : 0;
			min1 = min2;
		}
	}
	if (!min1)
		cout << -1;
	else
		cout << sum << endl << min1;
	
	return 0;
}