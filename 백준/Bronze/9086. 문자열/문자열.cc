#include <iostream>
#include <string>
using namespace std;  

int main()  
{  
	int T;
	cin >> T;

	int len = 0;
	for (int i = 0; i < T; i++)
	{
		string ary[1001];
		cin >> *ary;
		len = ary->length();
		cout << ary[0][0] << ary[0][len-1] << '\n';
	}

	return 0;  
}