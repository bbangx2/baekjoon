#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[10000] = { 0 };
	int sum = 0;
	int num = 0;

	while (n != -1)
	{
		for (int i = 1; i <= n / 2; i++)
		{
			if (!(n % i))
			{
				sum += i;
				array[num++] = i;
			}
		}
		if (sum == n)
		{
			cout << n << " = ";
			cout << array[0];
			for (int i = 1; i < num; i++)
			{
				cout << " + " << array[i];
			}
			cout << '\n';
		}
		else cout << n << " is NOT perfect.\n";
		memset(array, 0, sizeof(int) * 10000);
		sum = 0;
		num = 0;
		cin >> n;
	}
}