#include <bits/stdc++.h>
using namespace std;

bool isvisited[300001];
vector<int> G[300001];

int dfs(int i)
{
    cout << "visit:" << i << endl;
    // cout << i << "," << G[i].size()  << endl;
    isvisited[i] = true;
    int ret = 0;

    bool isleaf = true;
    for (int j = 0; j < G[i].size(); ++j)
    {
        if (isvisited[G[i].at(j)] == false)
        {
            ret += dfs(G[i].at(j)) + 1;
            isleaf = false;
        }
    }

    if (isleaf == true)
    {
        ret = 1;
    }

    return ret;
}

int hoge()
{
    int ans = 1 << 29;
    isvisited[1] = true;
    for (int j = 0; j < G[1].size(); ++j)
    {
        ans = min(ans, dfs(G[1].at(j)));
    }
    return ans;
}

int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for (int i = 0; i < N; ++i)
    {
        // << G[i].size() << endl;
    }

    cout << hoge() << endl;
}
