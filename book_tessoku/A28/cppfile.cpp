#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    long long ans = 0;
    for (int i = 0; i < N; ++i)
    {
        char T;
        int A;
        cin >> T >> A;
        if (T == '+')
        {
            ans += A;
        }
        else if (T == '-')
        {
            ans -= A;
        }
        else if (T == '*')
        {
            ans *= A;
        }
        long long ans_tmp = ans % 10000;
        if (ans_tmp < 0)
            ans_tmp += 10000;
        cout << ans_tmp << endl;
    }
}
