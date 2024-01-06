#include <bits/stdc++.h>
using namespace std;

int dp[101][3];

int nagasa(char S, char T)
{
    if (S == 'A')
    {
        if (T == 'B' || T == 'E')
        {
            return 1;
        }
        else if (T == 'C' || T == 'D')
        {
            return 2;
        }
    }
    else if (S == 'B')
    {
        if (T == 'C' || T == 'A')
        {
            return 1;
        }
        else if (T == 'D' || T == 'E')
        {
            return 2;
        }
    }

    else if (S == 'C')
    {
        if (T == 'B' || T == 'D')
        {
            return 1;
        }
        if (T == 'A' || T == 'E')
        {
            return 2;
        }
    }
    else if (S == 'D')
    {
        if (T == 'E' || T == 'C')
        {
            return 1;
        }
        if (T == 'A' || T == 'B')
        {
            return 2;
        }
    }

    else if (S == 'E')
    {
        if (T == 'A' || T == 'D')
        {
            return 1;
        }
        if (T == 'B' || T == 'C')
        {
            return 2;
        }
    }
    return 0;
}

int main(void)
{
    string S, T;
    cin >> S >> T;

    int len_s = nagasa(S[0], S[1]);
    int len_t = nagasa(T[0], T[1]);

    if (len_s == len_t)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
