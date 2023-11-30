#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
public:
    vector<int> rank, p;

    DisjointSet() {}
    DisjointSet(int size)
    {
        rank.resize(size, 0);
        p.resize(size, 0);
        for (int i = 0; i < size; ++i)
        {
            makeSet(i);
        }
    }
    void makeSet(int x)
    {
        p[x] = x;
        rank[x] = 0;
    }

    bool isSame(int x, int y)
    {
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y)
    {
        link(findSet(x), findSet(y));
    }

    void link(int x, int y)
    {
        // 木の高さが異なる場合、小さい木を合併する
        if (rank[x] > rank[y])
        {
            p[y] = x;
        }
        else
        {
            p[x] = y;
            if (rank[x] == rank[y])
            {
                // 同じ高さの木を合併する場合、代表のrankを+1する
                rank[y]++;
            }
        }
    }

    int findSet(int x)
    {
        // 親が自分自身でなくなるまで、再帰で検索
        if (x != p[x])
        {
            p[x] = findSet(p[x]);
        }
        return p[x];
    }
};

int main(void)
{
    int n, a, b, q;
    int t;
    cin >> n >> q;

    DisjointSet ds = DisjointSet(n);
    for (int i = 0; i < q; ++i)
    {
        cin >> t >> a >> b;
        if (t == 0)
        {
            ds.unite(a, b);
        }
        else if (t == 1)
        {
            if (ds.isSame(a, b))
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
}
