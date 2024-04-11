#include <iostream>

using namespace std;

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[N][N];
int color[N], d[N], f[N], tt;

void dfs_visit(int u)
{
    color[u] = GRAY;
    ++tt;
    d[u] = tt;
    for (int v = 0; v < n; ++v)
    {
        if (M[u][v] == 1 && color[v] == WHITE)
        {
            dfs_visit(v);
        }
    }
    ++tt;
    f[u] = tt;
    color[u] == BLACK;
}
void dfs()
{
    cout << "dfs" << endl;
    tt = 0;
    for (int i = 0; i < n; ++i)
    {
        color[i] = WHITE;
    }

    for (int i = 0; i < n; ++i)
    {
        if (color[i] == WHITE)
        {
            dfs_visit(0);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            M[i][j] = 0;
        }
    }

    int u, k, v;
    for (int i = 0; i < n; ++i)
    {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; ++j)
        {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    dfs();
    return 0;
}
