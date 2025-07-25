#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;
	long long int res = a * b * c;

	vector<int> v(10, 0);

	while (res)
	{
		int d = res % 10;
		v[d] = v[d] + 1;
		res /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << v[i] << endl;
}