#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Student {
	int sex;
	int number;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int M;
	cin >> M;
	vector<int> v(M);

	for (int i = 0; i < M; i++)
	{
		cin >> v[i];
	}

	int max = v[0];
	for (int i = 1; i < M; i++)
	{
		int a = ceil((v[i] - v[i - 1]) / 2.0);
		if (a > max) max = a;
	}

	if ((N - v[M - 1]) > max) max = (N - v[M - 1]);

	cout << max;
	return 0;
}