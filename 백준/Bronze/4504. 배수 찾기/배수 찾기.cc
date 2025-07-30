#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while (1)
	{
		int a;
		cin >> a;

		if (!a)
			break;

		if (a % n)
			cout << a << " is NOT a multiple of " << n << '.' << endl;
		else
			cout << a << " is a multiple of " << n << '.' << endl;
	}

}