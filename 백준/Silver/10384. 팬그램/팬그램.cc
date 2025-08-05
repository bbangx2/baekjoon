#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();

	vector<string> res = { "Not a pangram",
	"Pangram!", "Double pangram!!", "Triple pangram!!!" };
	
	for (int i = 0; i < N; i++)
	{
		vector<int> v(26, 0);
		string s;
		getline(cin, s);
		int a = -1;
		for (char c : s)
		{
			if (c >= 'A' && c <= 'Z')
			{
				a = (int)(c - 'A');
				v[a]++;
			}
			else if (c >= 'a' && c <= 'z')
			{
				a = (int)(c - 'a');
				v[a]++;
			}
		}
		int min = v[0];
		for (int j = 0; j < 26; j++)
		{
			if (min > v[j]) min = v[j];
			if (!v[j])
			{
				min = 0;
				break;
			}
		}
		cout << "Case " << i + 1 << ": " << res[min] << endl;
	}
	
	

}