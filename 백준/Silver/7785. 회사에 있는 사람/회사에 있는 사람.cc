#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<string, greater<string>> name;
	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s2 == "enter")
			name.insert(s1);
		else if (s2 == "leave")
		{
			size_t erased = name.erase(s1);
		}
	}

	for (string s : name)
		cout << s << '\n';
}