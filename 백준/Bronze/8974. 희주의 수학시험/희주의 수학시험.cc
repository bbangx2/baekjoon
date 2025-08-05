#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 50; i++)
	{
		for (int j = 0; j < i; j++)
		{
			v.push_back(i);
		}
	}
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a - 1; i < b; i++)
	{
		sum += v[i];
	}
	cout << sum;
}