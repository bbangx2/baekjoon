#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        int left = 0, right = 0;
        for (char c : s)
        {
            if (c == '(')
                left++;
            else if (c == ')')
                right++;

            if (left < right)
                break;
        }
        if (left == right)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}