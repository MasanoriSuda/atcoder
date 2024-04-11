#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N;
    cin >> N;

    int ans = 0;
    while (N != 0)
    {

        if ((N & 1) == 0)
        {
            ans++;
        }
        else
        {
            break;
        }
        N >>= 1;
    }
    cout << ans << endl;
}
