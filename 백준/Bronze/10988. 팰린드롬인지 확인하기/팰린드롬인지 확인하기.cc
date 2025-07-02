#include <iostream>
#include <string>
using namespace std;


int main() {
    
    string S1;
    string S2;
    string s;

    cin >> S1;

    for (int i = 0; i < S1.length(); i++)
    {
        s = S1[S1.length() - i - 1];
        S2.replace(i, 1, s);
    }

    cout << (S1 == S2 ? 1 : 0);

    return 0;
}