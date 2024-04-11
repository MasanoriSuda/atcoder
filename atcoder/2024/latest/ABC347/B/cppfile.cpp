#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
    set<string> str;
    for (int i = 0; i < S.size(); ++i)
    {
        for (int j = S.size(); j >= i + 1; --j)
        {
            str.insert(S.substr(i, j - i));
        }
    }
    cout << str.size() << endl;
}
