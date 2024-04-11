#include <bits/stdc++.h>
using namespace std;

class SegmentTree
{
public:
    int dat[3000000], siz = 1;

    void init(int N)
    {
        siz = 1;
        while (siz < N)
        {
            siz *= 2;
        }
        for (int i = 1; i < siz * 2; ++i)
        {
            dat[i] = 0;
        }
    }

    void update(int pos, int N)
    {
        pos = pos + siz - 1;
        dat[pos] = N;
        while (pos >= 2)
        {
            pos /= 2;
            dat[pos] = max(dat[pos * 2], dat[pos * 2 + 1]);
        }
    }

    int query(int l, int r, int a, int b, int u)
    {
        if (l <= a || b <= r)
        {
            return -1;
        }
        if (r <= a && b <= l)
        {
            return dat[u];
        }

        int m = (a + b) / 2;
        int AnswerL = query(l, r, a, m, u * 2);
    }
};

int main(void)
{
    int N;
    cin >> N;
    cout << pow(N, 2) << endl;
}
