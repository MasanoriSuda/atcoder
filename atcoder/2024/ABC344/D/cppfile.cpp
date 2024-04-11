#include <bits/stdc++.h>
using namespace std;

int dp[101][101];

int main(void)
{

    string T;
    cin >> T;
    int N;
    cin >> N;

    /**/
    for (int i = 0; i < 101; ++i)
    {
        for (int j = 0; j < 101; ++j)
        {
            if (j != 0)
            {
                dp[i][j] = 1 << 30;
            }
        }
    }

    for (int i = 1; i <= N; ++i)
    {
        int A;
        cin >> A;
        vector<string> S;
        string tmp;
        cin >> tmp;
        S.push_back(tmp);

        for (int j = 0; j < 101; j++)
        {
            for (int k = 0; k < S.size(); ++k)
            {
                if (dp[i - 1][j] == 1 << 30)
                {
                    continue;
                }
                int result = T.compare(j, S[k].size(), S[k]);
                if (result == 0)
                {
                    dp[i][j + S[k].size()] = min(dp[i][j + S[k].size()], dp[i - 1][j] + 1);
                }
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < T.size(); ++j)
        {
            cout << dp[i][j] << ",";
        }
        cout << endl;
    }

    cout << dp[N][T.size()] << endl;
}
