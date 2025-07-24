#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num;
	cin >> num;

	double total = 0.0;
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		int a;
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			int c;
			double d;
			cin >> c >> d;
			total += c * d;
			sum += c;
		}
		cout << sum << ' ' << total / sum << endl;
		total = 0;
		sum = 0;
	}

	return 0;

}