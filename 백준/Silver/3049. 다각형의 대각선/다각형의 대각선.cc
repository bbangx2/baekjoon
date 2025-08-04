#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long res = N * (N - 1) * (N - 2) * (N - 3) / 24;
    cout << res << '\n';
    return 0;
}