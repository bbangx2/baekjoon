#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;  

int main()  
{  
	int N;
	cin >> N;

	double* ary = new double[N];
	for (int i = 0; i < N; i++)
		cin >> ary[i];

	sort(ary, ary + N, greater<int>());

	double max = ary[0];
	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		ary[i] = (ary[i] / max) * 100;
		sum += ary[i];
	}
	cout << fixed << setprecision(3) << sum / N;

	delete[] ary;

	return 0;  
}