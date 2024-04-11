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
            if (S.at(0) != '<')
            {
                // cout << "hoge" << endl;
                cout << "No" << endl;
                return 0;
            }
        }
        else if (i == S.size() - 1)
        {
            if (S.at(S.size() - 1) != '>')
            {
                // cout << "hoge3" << endl;
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (S.at(i) != '=')
            {
                // cout << "hoge" << endl;
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
