#include <bits/stdc++.h>
using namespace std;
unsigned long long dp[20001];

int main(void)
{
    unsigned long long N, M, K;
    cin >> N >> M >> K;

    unsigned long long counter = 0;

    unsigned long long lcmval = lcm(N, M);
    unsigned long long gcdval = gcd(N, M);
    // cout << gcdval << endl;
    // cout << lcmval << endl;

    unsigned long long ans = min(N, M);
    while (counter < K)
    {
        unsigned long long counter2 = 0;
        if (ans % N == 0)
        {
            counter2++;
        }
        if (ans % M == 0)
        {
            counter2++;
        }
        if (ans % lcmval == 0)
        {
            counter2++;
        }
        if (counter2 == 1)
        {
            // cout << ans << endl;
            counter++;
        }

        if (counter == K)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;
}
