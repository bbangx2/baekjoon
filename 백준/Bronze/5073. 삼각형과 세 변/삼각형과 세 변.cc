#include <iostream>  
#include <algorithm>  
#include <vector>  
using namespace std;  

int main() {  
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];

	while (a[0] && a[1] && a[2])
	{
		sort(a.begin(), a.end());
		if ((a[0] + a[1]) <= a[2])
			cout << "Invalid" << endl;
		else if ((a[0] == a[1]) && (a[1] == a[2]))
			cout << "Equilateral" << endl;
		else if ((a[0] == a[1]) || (a[1] == a[2]))
			cout << "Isosceles" << endl;
		else
			cout << "Scalene" << endl;
		cin >> a[0] >> a[1] >> a[2];
	}
}