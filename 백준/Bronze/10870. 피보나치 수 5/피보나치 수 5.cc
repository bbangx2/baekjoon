#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector <int> fi(21);

	int n;
	cin >> n;

	fi[0] = 0;
	fi[1] = 1;

	for (int i = 2; i < 21; i++)
	{
		fi[i] = fi[i - 1] + fi[i - 2];
	}

	cout << fi[n];
}