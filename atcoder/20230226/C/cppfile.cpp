#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    set<pair<int, int>> v({{0, 0}});
    int x = 0, y = 0;

    bool issame = false;
    for (int i = 0; i < N; ++i)
    {
        if (S[i] == 'R')
        {
            x += 1;
        }
        else if (S[i] == 'L')
        {
            x -= 1;
        }
        else if (S[i] == 'U')
        {
            y += 1;
        }
        else if (S[i] == 'D')
        {
            y -= 1;
        }
        else
        {
            cout << "wrong" << endl;
        }
        // cout << curpos.first << "," << curpos.second << endl;
        if (v.find({x, y}) == v.end())
        {
            v.insert({x, y});
        }
        else
        {
            issame = true;
            break;
        }
    }
    if (issame)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
