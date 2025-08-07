#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int H, W, N, M;
	cin >> H >> W >> N >> M;

	int x = 0, y = 0;
	for (int i = 0; i < W; i += (M + 1))
	{
		x++;
	}
	for (int i = 0; i < H; i += (N + 1))
	{
		y++;
	}
	cout << x * y;

}