#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
    
    int N;
    cin >> N;
    int M = N;
    string *s = new string [N];

    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    int idx[26] = { 0 };
    char c, d;
    int flag = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < s[i].length() - 1; j++)
        {
            c = s[i][j];
            d = s[i][j + 1];
            if (!(idx[(int)d - (int)'a']) && (c != d))
            {
                idx[(int)c - (int)'a'] = 1;
            }
            else if ((idx[(int)d - (int)'a']) && (c != d))
            {
                flag = 1;
            }
            
        }
        if (flag)
        {
            flag = 0;
            M--;
        }
        memset(idx, 0, sizeof(int) * 26);
        
    }
    
    cout << M;
    
    delete[] s;

    return 0;
}