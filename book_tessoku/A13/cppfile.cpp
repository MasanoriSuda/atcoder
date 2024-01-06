#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K;
    vector<int> A, R;
    cin >> N >> K;

    A.push_back(0);
    R.push_back(0);

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    long long ans = 0;

    for (int i = 1; i <= N - 1; ++i)
    {
        if (i == 1)
        {
            R.push_back(1);
        }
        else
        {
            R.push_back(R[i - 1]);
        }

        while (R[i] < N && A[R[i] + 1] - A[i] <= K)
        {
            R[i]++;
        }
    }

    for (int i = 1; i <= N - 1; ++i)
    {
        // cout << R[i] << endl;
        ans += R[i] - i;
    }

    cout << ans << endl;
    return 0;
}
