#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i  < N - 1; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << ' ';
		}
		for (int j = 0; j < N - i; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}
	cout << setfill(' ') << setw(N) << '*';
}