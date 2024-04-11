#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
    string ans;
    bool hoge = false;
    for (int i = 0; i < S.size(); ++i)
    {
        if (S.at(i) == '|')
        {
            if (hoge == false)
            {
                hoge = true;
            }
            else
            {
                hoge = false;
            }
        }
        if (hoge == false && S.at(i) != '|')
        {
            ans += S.at(i);
        }
    }
    cout << ans << endl;
}
