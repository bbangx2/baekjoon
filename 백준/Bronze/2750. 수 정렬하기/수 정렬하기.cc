#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v[i] = a;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << endl;
	}
}