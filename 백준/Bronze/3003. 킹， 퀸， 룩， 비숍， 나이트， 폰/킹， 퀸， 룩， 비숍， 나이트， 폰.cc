#include <iostream>
using namespace std;


int main() {
    
    int ans[6] = { 1,1,2,2,2,8 };
    int inp[6];
    
    for (int i = 0; i < 6; i++)
    {
        cin >> inp[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] - inp[i] << ' ';
    }

    return 0;
}