#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); ++i)
    {
        if (i == 0)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
