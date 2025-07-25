#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int a;
			cin >> a;
			sum += a;
		}
		switch (sum)
		{
		case 0:
			cout << 'D' << endl;
			break;
		case 1:
			cout << 'C' << endl;
			break;
		case 2:
			cout << 'B' << endl;
			break;
		case 3:
			cout << 'A' << endl;
			break;
		case 4:
			cout << 'E' << endl;
			break;
		}
	}
}