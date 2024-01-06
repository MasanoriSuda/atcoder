#include <bits/stdc++.h>
using namespace std;

int dp[101][3];

int main(void)
{
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int ans = 1 << 30;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            for (int k = 0; k <= N; k++)
            {
                int eggval = i * S + j * M + k * L;
                int eggnum = i * 6 + j * 8 + k * 12;
                if (eggnum >= N)
                {
                    ans = min(ans, eggval);
                }
            }
        }
    }
    cout << ans << endl;
}
