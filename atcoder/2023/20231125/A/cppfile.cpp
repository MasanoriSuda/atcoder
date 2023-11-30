#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;

    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        cout << S.at(i);

        if (i != S.size() - 1)
        {
            cout << " ";
        }
    }

    cout << endl;
}
