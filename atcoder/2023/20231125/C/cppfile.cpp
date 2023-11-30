#include <bits/stdc++.h>
using namespace std;

int ma[26];

int main(void)
{
    long long D;
    cin >> D;

    long long minabs = (1ll << 62);

    long long guardval = ceil(sqrt(D));

    for (int x = 0; x <= guardval; ++x)
    {
        long long tmpval_x = x * x;
        long long tmpval_y_floor;
        long long tmpval_y_ceil;
        if (tmpval_x - D >= 0)
        {
            minabs = min(minabs, tmpval_x);
        }
        else
        {
            long long tmp;
            tmpval_y_floor = floor(sqrt(D - tmpval_x)) * floor(sqrt(D - tmpval_x));
            tmpval_y_ceil = ceil(sqrt(D - tmpval_x)) * ceil(sqrt(D - tmpval_x));
            tmp = min(abs((tmpval_x + tmpval_y_ceil) - D), (D - (tmpval_x + tmpval_y_floor)));
            minabs = min(minabs, tmp);
            // cout << x << tmpval_y_floor << tmpval_y_ceil << minabs << endl;
        }
    }
    cout << minabs << endl;
}
