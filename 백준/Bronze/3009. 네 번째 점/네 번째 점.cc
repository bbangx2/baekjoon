#include <iostream>
using namespace std;

int main() {
	int ary[3][2] = { 0 };
	cin >> ary[0][0] >> ary[0][1];
	cin >> ary[1][0] >> ary[1][1];
	cin >> ary[2][0] >> ary[2][1];

	if ((ary[0][0] != ary[1][0]) && (ary[0][0] != ary[2][0]))
		cout << ary[0][0] << ' ';
	else if ((ary[0][0] != ary[1][0]) && (ary[1][0] != ary[2][0]))
		cout << ary[1][0] << ' ';
	else cout << ary[2][0] << ' ';

	if ((ary[0][1] != ary[1][1]) && (ary[0][1] != ary[2][1]))
		cout << ary[0][1];
	else if ((ary[0][1] != ary[1][1]) && (ary[1][1] != ary[2][1]))
		cout << ary[1][1];
	else cout << ary[2][1];

}