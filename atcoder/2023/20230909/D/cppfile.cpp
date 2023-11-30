#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<long long> L;

    for (int i = 0; i < N; ++i)
    {
        long long tmp;
        cin >> tmp;
        tmp++;
        L.push_back(tmp);
    }

    long long lower = 0;
    long long upper = 0;
    for (int i = 0; i < N; ++i)
    {
        lower = max(lower, L[i]);
        upper += L[i];
    }

    // 二分探索
    lower--;
    upper++;

    while (upper - lower > 1)
    {
        long long mid = (upper + lower) / 2;
        // cout << mid << endl;
        long long rows = upper;
        long long max_column = 0;
        for (int i = 0; i < L.size(); ++i)
        {
            rows += L[i];
            if (rows > mid)
            {
                max_column++;
                rows = L[i];
            }
        }
        // cout << max_column << endl;
        if (max_column > M)
        {
            lower = mid;
        }
        else
        {
            upper = mid;
        }
    }

    cout << upper - 1 << endl;
}
