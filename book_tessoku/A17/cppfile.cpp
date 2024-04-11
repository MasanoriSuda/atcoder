#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001];

int main(void)
{
    int N;
    cin >> N;
    vector<int> dp(N + 1, 1 << 30);
    dp[1] = 0;
    int A[N];
    int B[N];

    for (int i = 2; i <= N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 3; i <= N; ++i)
    {
        cin >> B[i];
    }

    for (int i = 2; i <= N; ++i)
    {
        if (i == 2)
        {
            dp[2] = A[2];
        }
        else
        {
            dp[i] = min(dp[i - 2] + B[i], dp[i - 1] + A[i]);
        }
    }

    vector<int> ans;
    int place = N;
    ans.push_back(N);
    while (true)
    {
        if (dp[place - 1] + A[place] == dp[place])
        {
            place = place - 1;
        }
        else
        {
            place = place - 2;
        }
        ans.push_back(place);
        if (place == 1)
        {
            break;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
