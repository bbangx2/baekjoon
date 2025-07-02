#include <iostream>
using namespace std;


int main() {
    
    int N;
    cin >> N;

    int M = N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M - 1; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < ((N - M) * 2 + 1); k++)
        {
            cout << '*';
        }
        M--;
        cout << '\n';
    }
    M++;
    for (int i = 0; i < N-1; i++)
    {
        M++;
        for (int j = 0; j < M - 1; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < ((N - M) * 2 + 1); k++)
        {
            cout << '*';
        }
        cout << '\n';
    }


    return 0;
}