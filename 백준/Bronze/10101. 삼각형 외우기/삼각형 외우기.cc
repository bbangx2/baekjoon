#include <iostream>  
#include <algorithm>  
#include <vector>  
using namespace std;  

int main() {  
	int a, b, c;
	cin >> a >> b >> c;

	int d = a + b + c;

	if ((a == 60) && (b == 60) && (c == 60))
		cout << "Equilateral";
	else if ((d == 180) && ((a == b) || (a == c) || (b == c)))
		cout << "Isosceles";
	else if (d == 180)
		cout << "Scalene";
	else
		cout << "Error";
}