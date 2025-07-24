#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int s;
		cin >> s;

		int opt;
		cin >> opt;

		int sum = s;

		for (int j = 0; j < opt; j++)
		{
			int a, b;
			cin >> a >> b;
			sum += a * b;
		}
		cout << sum << endl;
	}

	return 0;

}