#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

static const int MAX = 100;
static const long long INF = (1ll << 32);

int n;
long long d[MAX][MAX];

void floyd()
{
    for (int k = 0; k < n; ++k)
    { // 経由する頂点
        for (int i = 0; i < n; ++i)
        { // 開始する頂点
            for (int j = 0; j < n; ++j)
            { // 終了する頂点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main(void)
{
    int e, u, v, c;
    int t;
    cin >> n >> e;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            d[i][j] = i == j ? 0 : INF;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> u >> v >> c;
        d[u][v] = c;
    }

    floyd();

    bool negative = false;

    for (int i = 0; i < n; ++i)
    {
        if (d[i][i] < 0)
        {
            negative = true;
        }
    }
    if (negative)
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j)
                    cout << " ";
                if (d[i][j] == INF)
                    cout << "INF";
                else
                    cout << d[i][j];
            }
            cout << endl;
        }
    }
}
