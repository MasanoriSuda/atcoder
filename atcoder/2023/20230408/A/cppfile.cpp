#include <bits/stdc++.h>
using namespace std;

bool used[100];

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> v[N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++i)
        {
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int S, T;
        cin >> S >> T;
        queue<pair<int, int>> que;

        que.push({S, 0});

        while (!que.empty())
        {
            pair<int, int> pr;
            pr = que.front();
            que.pop();
        }
    }
}
