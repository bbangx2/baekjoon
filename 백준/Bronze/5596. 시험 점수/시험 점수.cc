#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum1 = 0, sum2 = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	sum1 = a + b + c + d;
	cin >> a >> b >> c >> d;
	sum2 = a + b + c + d;
	cout << (sum1 > sum2 ? sum1 : sum2);
}