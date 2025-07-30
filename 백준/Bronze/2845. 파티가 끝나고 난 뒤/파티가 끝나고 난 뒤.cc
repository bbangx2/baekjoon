#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		int c;
		cin >> c;

		cout << (c - a * b) << ' ';
	}
}