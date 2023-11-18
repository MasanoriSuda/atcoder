#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> a(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }

    vector<int> fl(N + 1, 0); // 探索済みのvを記録する
    vector<int> s;            // 探索済みのvを記録する
    int v = 1;
    // このwhileループは、fl[v]==1に到達したときに停止、vは閉路の最初の頂点をさす
    while (fl[v] == 0)
    {
        fl[v] = 1;
        s.push_back(v);
        v = a[v];
        // cout << v;
    }
    // cout << endl;

    vector<int> res;
    // 閉路を作成する
    for (auto nx : s)
    {
        if (nx == v)
        {
            v = -1; // 始点を発見
        }
        if (v == -1)
        {
            res.push_back(nx); // 始点から伸びる頂点をたどっていく
        }
    }

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i)
    {
        if (i)
            cout << " ";
        cout << res.at(i);
    }
    cout << endl;
}
