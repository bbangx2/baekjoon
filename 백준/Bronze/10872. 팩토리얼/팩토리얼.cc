#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;
	
	long long fact = 1;

	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	cout << fact;
	
	return 0;
}