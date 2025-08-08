#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	char c;
	cin >> N >> c;

	set<string> name;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		name.insert(s);
	}

	int name_count = name.size();
	int game_count = 0;

	if (c == 'Y')
	{
		game_count = name_count;
	}
	else if (c == 'F')
	{
		game_count = name_count / 2;
	}
	else if (c == 'O')
	{
		game_count = name_count / 3;
	}

	cout << game_count;

	return 0;
}