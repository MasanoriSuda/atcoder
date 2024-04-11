#include <bits/stdc++.h>
using namespace std;

class UnionFind
{
public:
    int parent[100001];
    int siz[100001];

    void init(int N)
    {
        for (int i = 1; i <= N; ++i)
        {
            parent[i] = -1;
            siz[i] = 1;
        }
    }

    int root(int N)
    {
        int par = N;
        while (parent[par] != -1)
        {
            par = parent[par];
        }
        return par;
    }

    void unite(int u, int v)
    {
        int RootU = root(u);
        int RootV = root(v);

        // 大きい方に統合
        if (siz[RootU] > siz[RootV])
        {
            parent[RootV] = RootU;
            siz[RootU] += siz[RootV];
        }
        else
        {
            parent[RootU] = RootV;
            siz[RootV] += siz[RootU];
        }
    }

    bool same(int u, int v)
    {
        int RootU = root(u);
        int RootV = root(v);
        if (RootU == RootV)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(void)
{
    int N, Q;
    cin >> N >> Q;

    UnionFind UF;
    UF.init(N);

    for (int i = 0; i < Q; ++i)
    {
        int num, u, v;
        cin >> num >> u >> v;
        if (num == 1)
        {
            if (UF.same(u, v) == false)
            {
                UF.unite(u, v);
            }
        }
        else if (num == 2)
        {
            if (UF.same(u, v) == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
