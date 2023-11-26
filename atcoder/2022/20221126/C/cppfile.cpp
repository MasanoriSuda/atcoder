#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int H, W;
    cin >> H >> W;

    vector<string> S;
    vector<string> T;

    vector<string> tmp_s(W);
    vector<string> tmp_t(W);

    for (int i = 0; i < H; i++)
    {
        string tmp;
        cin >> tmp;
        S.push_back(tmp);
    }
    for (int i = 0; i < H; i++)
    {
        string tmp;
        cin >> tmp;
        // cout << tmp << endl;
        T.push_back(tmp);
        // cout << endl;
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            tmp_s[j].push_back(S[i][j]);
            tmp_t[j].push_back(T[i][j]);
        }
    }

    sort(tmp_s.begin(), tmp_s.end());
    sort(tmp_t.begin(), tmp_t.end());

    if (tmp_s == tmp_t)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
