#include <bits/stdc++.h>
using namespace std;

bool hoge[300001];

int main(void)
{
    int N;
    cin >> N;
    vector<long long> A;
    vector<long long> ans;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    long long minval = 1ll << 60;
    long long sum = 0;
    for (int i = 0; i < N; ++i)
    {
        sum += A[i];
        ans.push_back(sum);
        if (minval > sum)
        {
            minval = sum;
            // cout << minval << endl;
        }
    }

    // cout << minval << endl;
    if (minval >= 0)
    {
        cout << ans[N - 1] << endl;
    }
    else
    {
        cout << abs(minval) + ans[N - 1] << endl;
    }
}
