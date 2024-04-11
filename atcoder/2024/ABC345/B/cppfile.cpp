#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long X;
    cin >> X;

    if (X >= 0)
    {
        if (X % 10 == 0)
        {
            cout << X / 10 << endl;
        }
        else
        {
            cout << X / 10 + 1 << endl;
        }
    }
    else
    {
        long long absX = X;
        if (X % 10 == 0)
        {
            cout << absX / 10 << endl;
        }
        else
        {
            cout << absX / 10 << endl;
            // cout << absX / 10 + 1 << endl;
        }
    }
}
