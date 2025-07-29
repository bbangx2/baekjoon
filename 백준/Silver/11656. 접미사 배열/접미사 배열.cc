#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	int len = s.size();

	vector<string> v(len);
	for (int i = 0; i < len; i++)
	{
		v[i] = s.substr(i, len - i);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < len; i++)
	{
		cout << v[i] << endl;
	}
}