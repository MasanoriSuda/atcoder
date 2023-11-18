#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    map<int, vector<int>> ladder;

    for (int i = 0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        ladder[a].push_back(b);
        ladder[b].push_back(a);
    }

    queue<int> que;
    que.push(1);
    set<int> S;
    S.insert(1);

    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (auto a : ladder[v])
        {
            // a階は未探索
            if (!S.count(a))
            {
                que.push(a);
                S.insert(a);
            }
        }
    }

    cout << *S.rbegin() << endl;
}
