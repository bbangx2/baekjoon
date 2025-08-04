#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(100);
	int res = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;

		if (v[a - 1])
			res++;
		else
			v[a - 1] = 1;
	}
	cout << res;

}