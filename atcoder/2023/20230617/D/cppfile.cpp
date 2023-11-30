#include <bits/stdc++.h>
using namespace std;

long long dp[300001][2];

int main(void)
{

    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        // cout << dp[i][0] << dp[i][1] << endl;
        int X, Y;
        cin >> X >> Y;
        if (X == 0)
        {
            // 健康、たべる、健康、食べない、不調、食べる
            dp[i][0] = max(dp[i - 1][0] + Y, dp[i - 1][1] + Y);
            dp[i][0] = max(dp[i - 1][0], dp[i - 0][0]);
            dp[i][1] = dp[i - 1][1];
        }
        else
        {
            // 健康、食べる、不調、食べない
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][0] + Y, dp[i - 1][1]);
            dp[i][1] = max(dp[i - 1][0] + Y, dp[i - 1][1]);
        }
        // cout << dp[i][0] << dp[i][1] << endl;
    }
    cout << max(dp[N][0], dp[N][1]) << endl;

    return 0;
}
