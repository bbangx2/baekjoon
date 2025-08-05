#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int K;
	cin >> K;

	int a = 0, b = 1;
	for (int i = 1; i < K; i++)
	{
		int temp = b;
		b += a;
		a = temp;
	}
	cout << a << ' ' << b;
}