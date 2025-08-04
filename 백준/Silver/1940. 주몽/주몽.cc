#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N;
    cin >> N;
    int M;
    cin >> M;

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        int target = M - v[i];
        auto it = find(v.begin() + i + 1, v.end(), target);
        if (it != v.end())
        {
            cnt++;
            v.erase(it);
            size = v.size();
        }
    }
    cout << cnt;

}