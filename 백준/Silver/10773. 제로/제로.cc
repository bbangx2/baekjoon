#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	int K;
	cin >> K;

	vector<int> v;

	for (int i = 0; i < K; i++)
	{
		int a;
		cin >> a;
		if (!a)
			v.pop_back();
		else
			v.push_back(a);
	}

	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	cout << sum;

}