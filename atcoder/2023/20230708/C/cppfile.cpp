#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> v;

    for (int i = 0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());

    unsigned long long totalmed = 0;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        totalmed += it->second;
    }

    if (totalmed <= K)
    {
        cout << 1 << endl;
        return 0;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        totalmed -= it->second;
        if (totalmed <= K)
        {
            cout << it->first + 1 << endl;
            return 0;
        }
    }
    return 0;
}
