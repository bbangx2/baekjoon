#include <iostream>
using namespace std;

int main(){

	long long n;
	cin >> n;

	long long count = 0;
	count = (n * (n - 1) * (n - 2)) / 6;

	cout << count << endl << 3;


	return 0;
}