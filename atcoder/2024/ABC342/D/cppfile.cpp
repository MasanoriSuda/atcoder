#include <bits/stdc++.h>
using namespace std;
unsigned long long dp[20001];

map<int, int> mp;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    for (int i = 0; i < A.size(); ++i)
    {
        int tmp = A.at(i);

        for (int j = 2; j * j <= A.at(i); ++j)
        {
            if (tmp % j != 0)
            {
                continue;
            }
            int ex = 0;
            while (tmp % j == 0)
            {
                tmp /= j;
                ex++;
            }
            if (ex % 2 != 0)
            {
                tmp *= j;
            }
        }
        // cout << tmp << endl;
        mp[tmp]++;
    }

    long long ans = 0;
    // cout << "hoge" << mp.size() << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->first == 0)
        {
            ans += it->second * (A.size() - 1);
        }
        else
        {
            ans += it->second * (it->second - 1) / 2;
        }
        // cout << it->second << ans << endl;
    }

    cout << ans << endl;
}
