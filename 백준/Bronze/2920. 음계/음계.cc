#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v1 = { 1,2,3,4,5,6,7,8 };
	vector<int> v2 = { 8,7,6,5,4,3,2,1 };
	vector<int> v;

	for (int i = 0; i < 8; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	if (v == v1)
		cout << "ascending";
	else if (v == v2)
		cout << "descending";
	else
		cout << "mixed";
}