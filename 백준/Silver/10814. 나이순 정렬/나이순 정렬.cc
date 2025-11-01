#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, string>> members;

    for (int i = 0; i < N; i++)
    {
        int a;
        string s;
        cin >> a >> s;
        members.emplace_back(a, s);
    }

    stable_sort(members.begin(), members.end(), [](auto &a, auto &b)
         { return a.first < b.first; });

    for (auto &p : members)
    {
        cout << p.first << ' ' << p.second << '\n';
    }
}