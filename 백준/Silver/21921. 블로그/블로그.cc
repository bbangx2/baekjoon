#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, N;
    cin >> X >> N;

    vector<int> v(X);
    for (int i = 0; i < X; i++)
    {
        cin >> v[i];
    }

    int max = 0, cnt = 1;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += v[i];
    }
    max = sum;
    for (int i = 0; i < X - N; i++)
    {
        sum = sum - v[i] + v[i + N];
        if (max < sum)
        {
            cnt = 1;
            max = sum;
            continue;
        }
        if (max == sum)
        {
            cnt++;
        }
    }
    if (!max)
    {
        cout << "SAD" << '\n';
    }
    else
    {
        cout << max << '\n'
             << cnt << '\n';
    }
}