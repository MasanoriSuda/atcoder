#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    unsigned long long N;

    map<int, unsigned long long> mp;
    map<int, unsigned long long>::iterator itr;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        unsigned long long S, C;
        cin >> S >> C;
        // S[i]の値を奇数*偶数に分割する
        // サイズ3の3匹のスライムは、勝手に6+3に変換される
        while ((S & 1) == 0)
        {
            S = S >> 1;
            C = C << 1;
            // cout << S << C << endl;
        }

        mp[S] += C;
    }

    unsigned long long ans = 0;
    itr = mp.begin();
    while (itr != mp.end())
    {
        // cout << (*itr).first << endl;
        unsigned long long tmp = (*itr).second;
        while (tmp != 0)
        {
            ans += (tmp & 1);
            tmp = tmp >> 1;
        }
        itr++;
    }
    cout << ans << endl;
}
