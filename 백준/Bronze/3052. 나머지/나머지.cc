#include <iostream>
#include <algorithm>
using namespace std;  

int main()  
{  
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		a[i] %= 42;
	}

	sort(begin(a), end(a));
	int chk = a[0];
	int num = 1;
	for (int i = 0; i < 9; i++)
	{
		if (chk != a[i + 1])
		{
			chk = a[i + 1];
			num++;
		}
	}
	cout << num;

	return 0;  
}