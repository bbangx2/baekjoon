#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	int a;
	cin >> s >> a;

	int len = s.length();
	long sum = 0;

	for (int i = 0; i < len; i++)
	{
		if ((int)s[len - i - 1] >= (int)'A')
		{
			sum += pow(a, i) * (((int)s[len - i - 1] - (int)'A') + 10);
		}
		else sum += pow(a, i) * ((int)s[len - i - 1] - (int)'0');
	}
	cout << sum;

	return 0;
}