#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long A, M, L, R;
    cin >> A >> M >> L >> R;

    long long length = R - L + 1;

    long long ans;

    int mod_a, mod_r, mod_l;

    mod_r = abs(R - A) % M;
    mod_l = abs(L - A) % M;

    // cout << mod_a << mod_r << mod_l << endl;

    if (mod_r == 0)
    {
        if (length % M != 0)
        {
            ans = length / M + 1;
        }
        else
        {
            ans = length / M;
        }
    }
    else if (mod_l == 0)
    {
        if (length % M != 0)
        {
            ans = length / M + 1;
        }
        else
        {
            ans = length / M;
        }
    }
    else
    {
        ans = length / M;
        if (mod_r < mod_l)
        {
            mod_r += M;
        }
        if (mod_r >= A)
        {
            ans++;
        }
    }

    cout << ans << endl;
}
