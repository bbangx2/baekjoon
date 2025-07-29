#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int mon, date;
	cin >> mon >> date;

	int calc = 0;
	vector<int> v = { 31,28,31,30,31,30,31,31,30,31,30 };
	for (int i = 0; i < mon - 1; i++)
	{
		calc += v[i];
	}

	calc += date;
	calc %= 7;
	vector<string> day = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	cout << day[calc];

}