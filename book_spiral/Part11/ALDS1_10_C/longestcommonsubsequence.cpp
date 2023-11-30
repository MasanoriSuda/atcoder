#include <iostream>
using namespace std;

int dp[1001][1001];

int lcs(string S, string T)
{
    int size_s = S.size(), size_t = T.size();
    S = ' ' + S;
    T = ' ' + T;
    for (int i = 1; i <= size_s; ++i)
    {
        for (int j = 1; j <= size_t; ++j)
        {
            if (S[i] == T[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else if (dp[i - 1][j] > dp[i][j - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }
    return dp[size_s][size_t];
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string S, T;
        cin >> S >> T;
        cout << lcs(S, T) << endl;
    }
}
