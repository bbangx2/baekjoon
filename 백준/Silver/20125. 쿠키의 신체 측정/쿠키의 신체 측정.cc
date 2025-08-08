#include <iostream>
#include <vector>

using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

    vector<vector<char>> v(N, vector<char>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> v[i][j];
		}
	}

	Point head = { 0, 0 };
	Point heart = { 0,0 };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v[i][j] == '*')
			{
				head = { i + 1, j + 1 };
				heart = { i + 2, j + 1 };
				break;
			}
		}
		if (head.x) break;
	}

	int left_arm = 0, right_arm = N;
	for (int i = 0; i < heart.y - 1; i++)
	{
		if (v[heart.x - 1][i] == '*')
		{
			left_arm = i + 1;
			break;
		}
	}
	left_arm = heart.y - left_arm;
	
	for (int i = heart.y; i < N; i++)
	{
		if (v[heart.x - 1][i] != '*')
		{
			right_arm = i;
			break;
		}
	}
	right_arm = right_arm - heart.y;

	int waist = 0;
	for (int i = heart.x; i < N; i++)
	{
		if (v[i][heart.y - 1] != '*')
		{
			waist = i;
			break;
		}
	}
	int waist_len = waist - heart.x;

	int left_leg = N, right_leg = N;
	for (int i = waist; i < N; i++)
	{
		if (v[i][heart.y - 2] != '*')
		{
			left_leg = i;
			break;
		}
	}
	left_leg -= waist;
	for (int i = waist; i < N; i++)
	{
		if (v[i][heart.y] != '*')
		{
			right_leg = i;
			break;
		}
	}
	right_leg -= waist;

	cout << heart.x << ' ' << heart.y << '\n';
	cout << left_arm << ' ' << right_arm << ' ' << waist_len
		<< ' ' << left_leg << ' ' << right_leg;


	return 0;
}