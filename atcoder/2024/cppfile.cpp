#include <bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

int main(void)
{
    long long N;
    cin >> N;

    vector<pair<long long, long long>> G[N + 1];
    long long color[N + 1];
    long long dist[N + 1];

    for (long long i = 1; i <= N; ++i)
    {
        color[i] = WHITE;
        dist[i] = 1ll << 62;
    }

    for (long long i = 1; i <= N - 1; ++i)
    {
        long long A, B, X;
        cin >> A >> B >> X;
        G[i].push_back({i + 1, A});
        G[i].push_back({X, B});
    }

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> Q;

    dist[1] = 0;
    Q.push(make_pair(dist[1], 1));

    while (!Q.empty())
    {
        long long pos = Q.top().second;
        Q.pop();

        if (color[pos] == BLACK)
        {
            continue;
        }

        color[pos] = BLACK;

        for (long long i = 0; i < G[pos].size(); ++i)
        {
            long long nex = G[pos][i].first;
            long long cost = G[pos][i].second;
            if (dist[nex] > dist[pos] + cost)
            {
                dist[nex] = dist[pos] + cost;
                color[nex] = GRAY;
                Q.push(make_pair(dist[pos] + cost, nex));
            }
        }
    }

    cout << dist[N] << endl;
}
