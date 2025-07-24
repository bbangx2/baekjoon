#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int school;
	cin >> school;

	int sum = 0;
	int students, apples;
	
	for (int i = 0; i < school; i++)
	{
		cin >> students >> apples;
		sum += apples % students;
	}
	cout << sum;

	return 0;

}