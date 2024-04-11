#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <climits>

using namespace std;
static const int MAX = 100000;
static const int INF = (1 << 29);

vector<int> G[MAX];
list<int> out;
bool V[MAX];
int N;
int indeg[MAX];

void bfs(int s)
{

    queue<int> q;
    q.push(s);
    V[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        out.push_back(u);
        // cout << "u" << u << endl;
        // cout << G[u][0] << endl;
        // cout << V[5] << endl;
        for (int i = 0; i < G[u].size(); ++i)
        {
            // cout << "hoge" << G[s][i] << endl;
            int v = G[u][i];
            indeg[v]--;
            // cout << "hoge" << G[s][i] << "," << V[v] << "," << indeg[v] << endl;
            if (indeg[v] == 0 && !V[v])
            {
                q.push(v);
                V[v] = true;
            }
        }
    }
}

void tsort()
{
    for (int i = 0; i < N; ++i)
    {
        indeg[i] = 0;
    }

    for (int u = 0; u < N; ++u)
    {
        for (int v = 0; v < G[u].size(); ++v)
        {
            int i = G[u][v];
            indeg[i]++;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (indeg[i] == 0 && !V[i])
        {
            bfs(i);
        }
    }

    for (list<int>::iterator it = out.begin(); it != out.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    int s, t, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        V[i] = false;
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> s >> t;
        G[s].push_back(t);
    }

    tsort();

    return 0;
}
