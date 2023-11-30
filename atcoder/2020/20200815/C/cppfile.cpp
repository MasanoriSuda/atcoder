#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long X, K, D, abs_x;
    cin >> X >> K >> D;

    abs_x = abs(X);

    long long min_abs_plus, min_abs_minus, num;
    if (X - K * D >= 0)
    {
        cout << X - K * D << endl;
    }
    else
    {
        // 割ったときの余り
        num = abs_x / D;
        cout << abs_x << D << endl;
        min_abs_plus = abs_x - D * num;
        min_abs_minus = abs(abs_x - D * (num + 1));
        // cout << min_abs_plus << min_abs_minus << endl;
        if ((K - num) % 2 == 0)
        {
            cout << min_abs_plus << endl;
        }
        else
        {
            cout << min_abs_minus << endl;
        }
    }
}
