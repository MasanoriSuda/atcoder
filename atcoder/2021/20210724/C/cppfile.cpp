#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
void add(int &A, int B)
{
    A += B;
    if (A >= MOD)
    {
        A -= MOD;
    }
}

int main(void)
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string CHOKUDAI = "atcoder";
    vector<vector<int>> dp(S.size() + 1, vector<int>(8, 0));

    dp[0][0] = 1;

    for (int i = 0; i < S.size(); ++i)
    {
        for (int j = 0; j <= CHOKUDAI.size(); ++j)
        {
            add(dp[i + 1][j], dp[i][j]);

            if (j < CHOKUDAI.size() && S[i] == CHOKUDAI[j])
            {
                add(dp[i + 1][j + 1], dp[i][j]);
            }
        }
    }
    cout << dp[S.size()][CHOKUDAI.size()] << endl;

    for (int i = 0; i < S.size(); ++i)
    {
        for (int j = 0; j <= CHOKUDAI.size(); ++j)
        {
            if (j)
                cout << " ";
            cout << dp[i][j];
        }
        cout << endl;
    }
}
