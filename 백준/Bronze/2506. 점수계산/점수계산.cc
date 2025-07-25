#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	int point = 0;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;

		static int flag = 0;
		if (b)
			flag++;
		else
			flag = 0;

		point += flag;
	}
	cout << point;
}