#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(void)
{
    int H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;
    vector<string> S;
    for (int i = 0; i < H; ++i)
    {
        string tmp;
        cin >> tmp;
        S.push_back(tmp);
    }

    int ans = 0;
    int crntx, crnty;
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (S[i][j] == '#')
            {
                continue;
            }
            crntx = j;
            crnty = i;
            bool hoge = true;
            for (int k = 0; k < N; ++k)
            {
                if (T[k] == 'L')
                {
                    crntx += dx[0];
                    crnty += dy[0];
                }
                if (T[k] == 'R')
                {
                    crntx += dx[1];
                    crnty += dy[1];
                }
                if (T[k] == 'U')
                {
                    crntx += dx[2];
                    crnty += dy[2];
                }
                if (T[k] == 'D')
                {
                    crntx += dx[3];
                    crnty += dy[3];
                }
                if (crntx < 0 || crntx >= W || crnty < 0 || crnty >= H)
                {
                    hoge = false;
                    break;
                }
                if (S[crnty][crntx] == '#')
                {
                    hoge = false;
                    break;
                }
            }
            if (hoge == true)
            {
                // cout << i << j << endl;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
