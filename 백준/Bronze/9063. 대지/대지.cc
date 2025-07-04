#include <iostream>  
#include <algorithm>  
#include <vector>  
using namespace std;  

int main() {  
	int N;  
	cin >> N;  

	int a, b;
	cin >> a >> b;

	int x_max = a, x_min = a, y_max = b, y_min = b;

	for (int i = 0; i < N - 1; i++)
	{
		cin >> a >> b;
		if (x_max < a) x_max = a;
		else if (x_min > a) x_min = a;
		if (y_max < b) y_max = b;
		else if (y_min > b) y_min = b;
	}
	cout << (x_max - x_min) * (y_max - y_min);
}