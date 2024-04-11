#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int Q;
    cin >> Q;

    int A = ceil(300000);
    vector<bool> masu(A + 1, false);

    for (int i = 2; i <= A; ++i)
    {
        bool issosuu = true;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                issosuu = false;
                break;
            }
        }
        if (issosuu == true)
        {
            masu[i] = true;
        }
    }

    /*
    for (int i = 0; i < 30; ++i)
    {
        cout << i << "," << masu[i] << endl;
    }
    */

    for (int i = 0; i < Q; ++i)
    {
        int X;
        cin >> X;
        if (masu[X] == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
