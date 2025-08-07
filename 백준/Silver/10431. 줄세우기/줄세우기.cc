#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int P;
	cin >> P;

	for (int i = 0; i < P; i++)
	{
		int a;
		cin >> a;
		
		set<int> s;
		int sum = 0;

		for (int j = 0; j < 20; j++)
		{
			int b;
			cin >> b;
			s.insert(b);
			int dist = distance(s.find(b), s.end()) - 1;
			sum += dist;
		}
		cout << a << ' ' << sum << '\n';
	}
}