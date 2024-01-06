#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long X, Y, Z;
    cin >> X >> Y >> Z;
    // cout << X << Y << Z << endl;
    unsigned long long ans = 0;
    string S;
    cin >> S;

    unsigned long long dp[S.size() + 1][2];

    for (int i = 0; i <= S.size(); ++i)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = 1ll << 62;
            }
        }
    }

    // cout << dp[0][0] << dp[0][1] << endl;

    for (int i = 1; i <= S.size(); ++i)
    {
        if (S[i - 1] == 'a')
        {
            // cout << "0";
            unsigned long long min_cost = 1ll << 63;
            // off側の候補
            unsigned long long min_kouho1 = dp[i - 1][0] + X;     // 普通に打つ
            unsigned long long min_kouho4 = dp[i - 1][1] + X + Z; // CapsLoc+普通に打つ

            dp[i][0] = min(min_kouho1, min_kouho4);
            // on側の候補
            unsigned long long min_kouho3 = dp[i - 1][1] + Y;     // SHIFT
            unsigned long long min_kouho2 = dp[i - 1][0] + Y + Z; // CapsLoc+SHIFT
            dp[i][1] = min(min_kouho3, min_kouho2);
        }
        else
        {
            // cout << "1";
            //  cout << i << endl;
            unsigned long long min_cost = 1ll << 63;
            // on側の候補
            unsigned long long min_kouho3 = dp[i - 1][1] + X;     // 普通に打つ
            unsigned long long min_kouho2 = dp[i - 1][0] + X + Z; // CapsLoc+普通に打つ
            dp[i][1] = min(min_kouho3, min_kouho2);
            // off側の候補
            unsigned long long min_kouho1 = dp[i - 1][0] + Y;     // SHIFT
            unsigned long long min_kouho4 = dp[i - 1][1] + Y + Z; // CapsLoc+SHIFT
            dp[i][0] = min(min_kouho1, min_kouho4);
            // cout << i << "," << min_kouho1 << "," << min_kouho2 << "," << min_kouho3 << "," << min_kouho4 << endl;
        }
        // cout << dp[i][0] << dp[i][1] << endl;
    }
    cout << min(dp[S.size()][0], dp[S.size()][1]) << endl;
}
