#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;


int main() {
    
    string s[20];

    for (int i = 0; i < 20; i++)
    {
        getline(cin, s[i]);
    }

    int idx; 
    double a, b;
    double sum = 0.0;
    int pFlag = 0;
    int sub = 0;

    for (int i = 0; i < 20; i++)
    {
        idx = s[i].find(".");
        a = (double)s[i][idx - 1] - (double)'0';
        if (s[i][s[i].length() - 2] == 'A')
        {
            if (s[i][s[i].length() - 1] == '+')
            {
                b = 4.5;
            }
            else if (s[i][s[i].length() - 1] == '0')
            {
                b = 4.0;
            }
        }
        else if (s[i][s[i].length() - 2] == 'B')
        {
            if (s[i][s[i].length() - 1] == '+')
                b = 3.5;
            else if (s[i][s[i].length() - 1] == '0')
                b = 3.0;
        }
        else if (s[i][s[i].length() - 2] == 'C')
        {
            if (s[i][s[i].length() - 1] == '+')
                b = 2.5;
            else if (s[i][s[i].length() - 1] == '0')
                b = 2.0;
        }
        else if (s[i][s[i].length() - 2] == 'D')
        {
            if (s[i][s[i].length() - 1] == '+')
                b = 1.5;
            else if (s[i][s[i].length() - 1] == '0')
                b = 1.0;
        }
        if (s[i][s[i].length() - 1] == 'F')
        {
            b = 0.0;
        }
        else if (s[i][s[i].length() - 1] == 'P')
        {
            pFlag = 1;
        }
        if (pFlag)
        {
            pFlag = 0;
            a = 0;
        }
        sub += a;
        sum += a * b;
    }
    cout << fixed << setprecision(5) << sum / sub;

    return 0;
}