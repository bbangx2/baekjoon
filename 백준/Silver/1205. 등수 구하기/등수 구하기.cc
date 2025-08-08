#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, pts, P;
	cin >> N >> pts >> P;

	vector<int> score;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		score.push_back(a);
	}
	sort(score.begin(), score.end(), [](int a, int b) {
		return a > b;
		});

	if (N == P)
	{
		if (pts <= score[N - 1])
		{
			cout << -1;
			return 0;
		}
		else
		{
			score.pop_back();
		}
	}
	score.push_back(pts);
	sort(score.begin(), score.end(), [](int a, int b) {
		return a > b;
		});

	int rank = 0;
	for (int i : score)
	{
		rank++;
		if (pts == i)
		{
			break;
		}
	}

	cout << rank;


	return 0;
}