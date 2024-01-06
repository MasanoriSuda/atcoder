#include <bits/stdc++.h>
using namespace std;

int dp[101][3];

int main(void)
{
    int K, G, M;
    cin >> K >> G >> M;

    int mug = 0, glass = 0;
    for (int i = 0; i < K; ++i)
    {
        if (glass == G)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = M;
        }
        else
        {
            int glass_remain = G - glass;
            if (mug >= glass_remain)
            {
                mug -= glass_remain;
                glass = G;
            }
            else
            {
                glass += mug;
                mug = 0;
            }
        }
    }
    cout << glass << " " << mug << endl;
}
