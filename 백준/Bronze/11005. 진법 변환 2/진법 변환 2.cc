#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	long N = 0;
	int B = 0;
	cin >> N >> B;

	long sum = 0;
	string s;
	char c;

	while (N / B)
	{
		if ((N % B) >= 10)
		{
			c = (char)(N % B + (int)'A' - 10);
			s = c + s;
		}
		else
		{
			c = (char)(N % B + (int)'0');
			s = c + s;
		}
		N /= B;
	}
	if ((N % B) >= 10)
	{
		c = (char)(N % B + (int)'A' - 10);
		s = c + s;
	}
	else
	{
		c = (char)(N % B + (int)'0');
		s = c + s;
	}
	cout << s;

	return 0;
}