#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<long long> v(46);
	int n;
	cin >> n;
	v[0] = 0;
	v[1] = 1;
	for (int i = 2; i < 46; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}


	cout << v[n];
	
	return 0;
}