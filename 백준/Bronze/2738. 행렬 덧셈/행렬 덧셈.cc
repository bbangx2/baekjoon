#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int** ary1 = new int*[N];
	for (int i = 0; i < N; i++)
	{
		ary1[i] = new int[M];
	}

	int** ary2 = new int* [N];
	for (int i = 0; i < N; i++)
	{
		ary2[i] = new int[M];
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> ary1[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> ary2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			ary1[i][j] += ary2[i][j];
			cout << ary1[i][j] << ' ';
		}
		cout << '\n';
	}

	for (int i = 0; i < N; i++)
	{
		delete[] ary1[i];
	}
	for (int i = 0; i < N; i++)
	{
		delete[] ary2[i];
	}

	delete[] ary1;
	delete[] ary2;
}