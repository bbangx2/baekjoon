#include <iostream>  
using namespace std;  

int main()  
{  
	int N, M;
	cin >> N >> M;
	int A[100];
	for (int i = 0; i < N; i++)
		A[i] = i + 1;

	int a, b, temp;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		temp = A[a-1];
		A[a-1] = A[b-1];
		A[b-1] = temp;
	}
	for (int i = 0; i < N; i++)
		cout << A[i] << ' ';
	return 0;  
}