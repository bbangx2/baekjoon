#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {
    
    string s;
    cin >> s;

    int chk[26] = { 0 };

    for (char& c : s)
    {
        c = toupper(c);
    }

    for (char c : s)
    {
        chk[(int)c - (int)'A'] += 1;
    }
    int max = chk[0], idx = 0;
    for (int i = 0; i < 26 - 1; i++)
    {
        if (max < chk[i + 1])
        {
            max = chk[i + 1];
            idx = i + 1;
        }
    }
    int max_check = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max == chk[i])
        {
            max_check++;
        }
    }
    if (max_check == 1)
    {
        cout << (char)(idx + (int)'A');
    }
    else
    {
        cout << '?';
    }

    return 0;
}