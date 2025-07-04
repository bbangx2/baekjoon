#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];

	sort(a.begin(), a.end());

	if ((a[0] + a[1]) <= a[2])
	{
		cout << (a[0] + a[1]) * 2 - 1;
	}
	else
		cout << a[0] + a[1] + a[2];
}