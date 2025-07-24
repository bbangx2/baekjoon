#include <iostream>

using namespace std;


int main() {
	
	int n;
	cin >> n;

	int sum = 1;
	int excode = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> excode;
		sum += excode - 1;
	}

	cout << sum;

	return 0;
}