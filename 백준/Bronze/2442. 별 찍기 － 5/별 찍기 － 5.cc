#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	return 0;

}