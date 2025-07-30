#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	if (s1.size() >= s2.size())
		cout << "go";
	else
		cout << "no";
}