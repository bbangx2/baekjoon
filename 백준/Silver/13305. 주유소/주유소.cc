#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<long long> load(N - 1);
	vector<long long> city(N);

	for (int i = 0; i < N - 1; i++)
		cin >> load[i];
	for (int i = 0; i < N; i++)
		cin >> city[i];

	long long low_city = city[0];
	long long min = low_city * load[0];

	for (int i = 1; i < N - 1; i++)
	{
		if (low_city > city[i])
			low_city = city[i];
		min += low_city * load[i];
	}
	cout << min;

	
	return 0;
}