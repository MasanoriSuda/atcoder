#include <bits/stdc++.h>
using namespace std;

map<unsigned long long, unsigned long long> mp;

int main(void)
{
    unsigned long long N, T;
    cin >> N >> T;
    mp[0] = N;
    vector<unsigned long long> cur(N + 1, 0);
    for (int i = 1; i <= T; ++i)
    {
        unsigned long long A, B;
        cin >> A >> B;

        mp[cur[A]]--;
        if (mp[cur[A]] == 0)
        {
            auto it = mp.find(cur[A]);
            if (it != mp.end())
            {
                mp.erase(it);
            }
        }
        cur[A] += B;
        mp[cur[A]]++;

        cout << mp.size() << endl;
    }
}
