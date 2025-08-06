#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Country {
	int num, gold, silver, bronze;
};

bool compare(const Country& a, const Country& b);

int main() {

	int N, K;
	cin >> N >> K;
	
	vector<Country> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].num >> v[i].gold >> v[i].silver >> v[i].bronze;
	}

	sort(v.begin(), v.end(), compare);

	int rank = 1;
	int answer = 1;
	Country prev = v[0];

	for (int i = 0; i < N; i++)
	{
		if (i > 0 && (v[i].gold != prev.gold ||
			v[i].silver != prev.silver ||
			v[i].bronze != prev.bronze))
		{
			rank = i + 1;
		}
		if (v[i].num == K)
		{
			answer = rank;
			break;
		}
		prev = v[i];
	}

	cout << answer;
}

bool compare(const Country& a, const Country& b) {
	if (a.gold != b.gold) return a.gold > b.gold;
	if (a.silver != b.silver) return a.silver > b.silver;
	else return a.bronze > b.bronze;
}