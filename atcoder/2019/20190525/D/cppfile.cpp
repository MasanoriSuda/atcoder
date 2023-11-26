#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> A;

    map<int, int> mp;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    sort(A.begin(), A.end());

    for (int i = 0; i < M; ++i)
    {
        int B, C;
        cin >> B >> C;
        mp[C] += B;
    }

    int replaceindex = 0;

    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        while (it->second && replaceindex < N)
        {
            // cout << it->first << it->second << endl;
            if (A[replaceindex] < it->first && it->second > 0)
            {
                // cout << A[replaceindex] << it->first << it->second << endl;
                A[replaceindex] = it->first;
                it->second--;
                replaceindex++;
            }
            if (A[replaceindex] >= it->first)
            {
                replaceindex++;
            }
        }
    }

    unsigned long long ans = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        ans += A[i];
    }
    cout << ans << endl;
}
