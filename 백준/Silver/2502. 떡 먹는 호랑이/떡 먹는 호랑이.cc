#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v(35);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i < 31; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	
	int D, K;
	cin >> D >> K;
	int a = 0, b = 0;
	for (int i = 1; i <= K; i++)
	{
		if ((K - v[D - 3] * i) % v[D - 2] == 0)
		{
			a = i;
			b = (K - v[D - 3] * i) / v[D - 2];
			break;
		}
	}

	cout << a << endl << b;
}