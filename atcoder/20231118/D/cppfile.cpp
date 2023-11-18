#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int N, M;
    cin >> N >> M;

    vector<int> ma(N + 1, 0);
    int tousensha = 0;
    for (int i = 0; i < M; i++)
    {
        int tmphyou;
        cin >> tmphyou;
        ma[tmphyou]++;

        if (ma[tousensha] < ma[tmphyou])
        {
            tousensha = tmphyou;
        }
        else if (ma[tousensha] == ma[tmphyou])
        {
            tousensha = min(tousensha, tmphyou);
        }
        cout << tousensha << endl;
    }
}
