#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int mon, date;
	cin >> date >> mon;

	int calc = 0;
	vector<int> v = { 31,28,31,30,31,30,31,31,30,31,30 };
	for (int i = 0; i < mon - 1; i++)
	{
		calc += v[i];
	}

	calc += date + 3;
	calc %= 7;
	vector<string> day = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	cout << day[calc];

}