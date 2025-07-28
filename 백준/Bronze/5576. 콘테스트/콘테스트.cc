#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector <int> u1(10);
	vector <int> u2(10);

	for (int i = 0; i < 10; i++)
		cin >> u1[i];

	for (int i = 0; i < 10; i++)
		cin >> u2[i];

	sort(u1.begin(), u1.end(), [](int a, int b) {
		return a > b;
		});

	sort(u2.begin(), u2.end(), [](int a, int b) {
		return a > b;
		});

	cout << u1[0] + u1[1] + u1[2] << ' ' << u2[0] + u2[1] + u2[2];
}