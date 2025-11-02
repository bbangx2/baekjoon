#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int counts[10001] = {0};

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        counts[num]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < counts[i]; j++)
        {
            cout << i << '\n';
        }
    }
}