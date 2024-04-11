#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001];

template <class T>
void chmax(T &A, T B)
{
    if (A < B)
    {
        A = B;
    }
}

int main(void)
{
    int N, W;
    cin >> N >> W;

    // cout << N << "," << W << endl;

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for (int i = 0; i < N; ++i)
    {
        int w, v;
        cin >> w >> v;
        for (int j = 0; j <= W; ++j)
        {
            // 品物を選択する
            if (j - w >= 0)
            {
                chmax(dp[i + 1][j], dp[i][j - w] + v);
            }
            // 品物を選択しない
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }

    /*
        for (int i = 0; i <= N; ++i)
        {
            for (int j = 0; j <= W; ++j)
            {
                if (j)
                    cout << " ";
                cout << dp[i][j];
            }
            cout << endl;
        }
    */
    cout << dp[N][W] << endl;

    return 0;
}
