#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<int> reach(N + 1, false);
    vector<int> u[N + 1];

    for (int i = 0; i < M; ++i)
    {
        int tmp_u, tmp_v;
        cin >> tmp_u >> tmp_v;
        // cout << tmp_u << tmp_v;
        u[tmp_u].push_back(tmp_v);
        u[tmp_v].push_back(tmp_u);
    }

    if (N != M + 1)
    {
        cout << "No" << endl;
        return 0;
    }

    int start;
    for (int i = 1; i <= N; i++)
    {
        int size = u[i].size();
        // cout << i << size << endl;
        if (size > 2)
        {
            cout << "No" << endl;
            return 0;
        }
        if (size == 1)
        {
            start = i;
        }
        // cout << endl;
    }

    queue<int> que;
    que.push(start);
    reach[start] = true;

    while (!que.empty())
    {
        int tmp = que.front();
        que.pop();
        for (auto a : u[tmp])
        {
            // cout << a << endl;
            if (!reach[a])
            {
                que.push(a);
                // cout << a;
                reach[a] = true;
            }
        }
    }

    for (int i = 1; i <= N; ++i)
    {
        if (!reach[i])
        {
            cout << "No" << endl;
        }
    }
    cout << "Yes" << endl;
}
