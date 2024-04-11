#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001];

int main(void)
{
    string S, T;
    cin >> S >> T;
    S = ' ' + S;
    T = ' ' + T;

    int ans = 0;
    for (int i = 1; i <= S.size() - 1; ++i) // Sの要素を比較する
    {
        for (int j = 1; j <= T.size() - 1; ++j) // Tの要素を比較する
        {
            if (S[i] == T[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << endl;
    return 0;
}
