#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v1(n), v2(n);

	for (int i = 0; i < n; i++)
		cin >> v1[i];

	for (int i = 0; i < n; i++)
		cin >> v2[i];

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), [](int a, int b) {
		return a > b;
		});

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += v1[i] * v2[i];

	cout << sum;

}