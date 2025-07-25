#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v;

	while (N)
	{
		v.push_back(N % 10);
		N /= 10;
	}

	sort(v.begin(), v.end(), [](int a, int b) {
		return a > b;
		});
	for (int i : v)
		cout << i;
}