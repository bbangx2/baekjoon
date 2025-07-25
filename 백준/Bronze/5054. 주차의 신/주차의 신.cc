#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;

		int min = -1;
		int max = -1;
		for (int j = 0; j < b; j++)
		{
			int c;
			cin >> c;

			if(min == -1)
				min = c;
			if(max == -1)
				max = c;

			if (min > c)
				min = c;
			if (max < c)
				max = c;
		}
		cout << (max - min) * 2 << endl;
	}
}