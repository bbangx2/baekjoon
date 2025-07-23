#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min_index = 0;
	int max_index = 0;
	vector<string> name(n);
	vector<int> date(n);
	vector<int> month(n);
	vector<int> year(n);
	vector<int> calc(n);

	for (int i = 0; i < n; i++)
	{
		cin >> name[i] >> date[i] >> month[i] >> year[i];
		calc[i] = year[i] * 10000 + month[i] * 100 + date[i];
		static int min = calc[i];
		static int max = calc[i];
		if (min > calc[i])
		{
			min_index = i;
			min = calc[i];
		}
		else if (max < calc[i])
		{
			max_index = i;
			max = calc[i];
		}
	}
	cout << name[max_index] << endl << name[min_index];
}