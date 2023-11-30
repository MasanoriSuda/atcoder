#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(void)
{
    int N, K;

    vector<int> A, B;

    cin >> N >> K;
    vector<bool> dp(N, false), ep(N, false);

    for (int i = 0; i < N; ++i)
    {
        int tmp_a;
        cin >> tmp_a;
        A.push_back(tmp_a);
    }

    for (int i = 0; i < N; ++i)
    {
        int tmp_b;
        cin >> tmp_b;
        B.push_back(tmp_b);
    }

    for (int i = 0; i < N; ++i)
    {
        if (i == 0)
        {
            dp[0] = ep[0] = true;
        }
        else
        {
            if (dp[i - 1] && (abs(A[i] - A[i - 1]) <= K))
                dp[i] = true;
            if (ep[i - 1] && (abs(A[i] - B[i - 1]) <= K))
                dp[i] = true;
            if (dp[i - 1] && (abs(B[i] - A[i - 1]) <= K))
                ep[i] = true;
            if (ep[i - 1] && (abs(B[i] - B[i - 1]) <= K))
                ep[i] = true;
            // cout << A[i] << B[i] << endl;
            // cout << dp[i] << ep[i] << endl;
        }
    }
    if (dp[N - 1] || ep[N - 1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
