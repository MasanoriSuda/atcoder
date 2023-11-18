#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;
    cin >> N >> Q;

    map<int, int> mp[N + 1];

    for (int i = 0; i < Q; ++i)
    {
        int q1, q2, q3;
        if (q1 == 1)
        {
            cin >> q2 >> q3;
            mp[q3][q2]++;
        }
        else
        {
            cin >> q2;
            if (q1 == 2)
            {
            }
            else
            {
            }
        }
    }
}
