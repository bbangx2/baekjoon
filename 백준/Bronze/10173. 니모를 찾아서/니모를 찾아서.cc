#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (1)
	{
		string s;
		getline(cin, s);
		if (s == "EOI")
			break;
		for (char& c : s)
			c = tolower(c);

		if (s.find("nemo") != string::npos)
			cout << "Found" << endl;
		else
			cout << "Missing" << endl;
	}
	
}