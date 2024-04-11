#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    char start = S[0];
    for (int i = 0; i < S.size(); ++i)
    {
        if (start != S[i])
        {
            if (start == 'B' && S[i] == 'A' ||
                start == 'C' && S[i] == 'B' ||
                start == 'C' && S[i] == 'A')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        start = S[i];
    }
    cout << "Yes" << endl;
}
