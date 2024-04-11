#include <bits/stdc++.h>
using namespace std;

map<unsigned long long, unsigned long long> mp;

unsigned long long takahashi_rec(unsigned long long money)
{
    unsigned long long money2;
    if (money != 1)
    {
        if (mp.find(money) != mp.end())
        {
            return mp[money];
        }
        else
        {
            if (money % 2 == 0)
            {
                money2 = takahashi_rec(money / 2) * 2;
            }
            else
            {
                money2 = takahashi_rec(money / 2) + takahashi_rec(money / 2 + 1);
            }
            mp[money] = money + money2;
            return mp[money];
        }
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    unsigned long long N;
    cin >> N;

    unsigned long long ans = takahashi_rec(N);

    cout << ans << endl;
}
