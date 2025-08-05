#include <iostream>
#include <string>

using namespace std;

int main() {

	string targ;
	cin >> targ;

	int N;
	cin >> N;

	int res = 0;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		s += s;
		auto it = s.find(targ);
		if (it != string::npos)
		{
			res++;
		}
	}
	cout << res;
}