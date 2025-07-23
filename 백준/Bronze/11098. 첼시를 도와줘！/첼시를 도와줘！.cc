#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int M;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		vector<long long> C(M);
		vector<string> S(M);
		long long min = 0;
		int minFlag = 0;
		for (int j = 0; j < M; j++)
		{
			cin >> C[j];
			cin >> S[j];
			if (min < C[j])
			{
				min = C[j];
				minFlag = j;
			}
		}
		cout << S[minFlag] << endl;
	}

	return 0;

}