#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> v[10];

    for (int i = 0; i < M; ++i)
    {
        int C;
        cin >> C;
        for (int j = 0; j < C; j++)
        {
            int a;
            cin >> a;
            v[i].emplace_back(a);
        }
    }

    int ans = 0;
    for (int i = 0; i < 1 << M; i++)
    {

        set<int> s;
        for (int j = 0; j < M; j++)
        {
            if ((i >> j) & 1)
            {
                for (auto &x : v[j])
                    s.insert(x);
            }
        }
        if (s.size() == N)
            ans++;
    }
    cout << ans << endl;
}
