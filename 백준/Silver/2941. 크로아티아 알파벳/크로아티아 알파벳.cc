#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {
    
    string s;
    cin >> s;

    int len = s.length();

    char c;
    int chk = 0;

    for (int i = 0; i < len - 1; i++)
    {
        c = s[i];
        if (c == 'c')
        {
            c = s[i + 1];
            if (c == '=' || c == '-')
                chk++;
        }
        if (c == 'd')
        {
            c = s[i + 1];
            if (c == 'z')
            {
                c = s[i + 2];
                if (c == '=')
                {
                    chk++;
                }
            }
            else if (c == '-')
                chk++;
        }
        if (c == 'l')
        {
            c = s[i + 1];
            if (c == 'j')
                chk++;
        }
        if (c == 'n')
        {
            c = s[i + 1];
            if (c == 'j')
                chk++;
        }
        if (c == 's')
        {
            c = s[i + 1];
            if (c == '=')
                chk++;
        }
        if (c == 'z')
        {
            c = s[i + 1];
            if (c == '=')
                chk++;
        }
    }

    len = len - chk;

    cout << len;

    return 0;
}