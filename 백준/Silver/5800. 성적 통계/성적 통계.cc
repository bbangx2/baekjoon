#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		vector<int> v(a);
		for (int j = 0; j < a; j++)
		{
			int b;
			cin >> b;
			v[j] = b;
		}
		sort(v.begin(), v.end());
		int gap = 0;

		for (int j = 0; j < v.size() - 1; j++)
		{
			if ((v[j + 1] - v[j]) > gap)
				gap = (v[j + 1] - v[j]);
		}
		cout << "Class " << i + 1 << endl;
		cout << "Max " << v[v.size() - 1] << ", "
			<< "Min " << v[0] << ", "
			<< "Largest gap " << gap << endl;
	}

}