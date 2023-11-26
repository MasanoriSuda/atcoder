#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ans = 0;
    int N;
    cin >> N;

    map<int, int> mp;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        ++mp[tmp];
    }

    for (auto [_, cnt] : mp)
    {
        ans += cnt / 2;
    }

    cout << ans << endl;
}
