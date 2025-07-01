#include <iostream>  
using namespace std;  

int main()  
{  
	int N;
	cin >> N;

	int array[100] = { 0, };

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}

	int v;
	cin >> v;
	int cnt = 0;

	for (int i = 0; i < N; i++)
	{
		if (array[i] == v)
			cnt++;
	}
	cout << cnt;

	return 0;  
}