#include <bits/stdc++.h>
using namespace std;

bool islighton[100000];

int main(void)
{
    string S, T;
    cin >> S >> T;

    bool isreplacement = false;
    for (int i = S.size() - T.size(); i >= 0; i--)
    {
        if (isreplacement == false)
        {
            if (S == T)
            {
                isreplacement = true;
                S.replace(i, T.size(), T);
            }
            else
            {
                isreplacement = true;
                for (int j = 0; j < T.size(); ++j)
                {
                    if (S[i + j] != T[j] && S[i + j] != '?')
                    {
                        isreplacement = false;
                        break;
                    }
                }
                if (isreplacement == true)
                {
                    S.replace(i, T.size(), T);
                }
            }
        }
        else
        {
            if (S[i] == '?')
                S[i] = 'a';
        }
    }

    if (isreplacement == true)
    {
        for (int i = 0; i < S.size(); ++i)
        {
            if (S[i] == '?')
            {
                S[i] = 'a';
            }
        }
        cout << S << endl;
    }
    else
    {
        cout << "UNRESTORABLE" << endl;
    }
}
