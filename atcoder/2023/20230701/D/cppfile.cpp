#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

bool isvisited[500][500];

int main(void)
{
    int H, W;
    cin >> H >> W;
    string S[H];
    for (int i = 0; i < H; ++i)
    {
        string tmp_s;
        cin >> tmp_s;
        S[i] = tmp_s;
        // cout << S[i] << endl;
    }
    map<char, char> next;
    next['s'] = 'n';
    next['n'] = 'u';
    next['u'] = 'k';
    next['k'] = 'e';
    next['e'] = 's';

    if (S[0][0] != 's')
    {
        cout << "No" << endl;
        return 0;
    }

    queue<pair<int, int>> que;
    que.push({0, 0});

    while (!que.empty())
    {
        pair<int, int> pr;
        pr = que.front();
        que.pop();
        isvisited[pr.second][pr.first] = true;

        for (int i = 0; i < 4; ++i)
        {
            int next_x = pr.first + dx[i];
            int next_y = pr.second + dy[i];
            if (next_x < 0 || next_x >= W || next_y < 0 || next_y >= H)
            {
                continue;
            }

            if (isvisited[next_y][next_x] == true)
            {
                continue;
            }

            if (next[S[pr.second][pr.first]] != S[next_y][next_x])
            {
                continue;
            }
            que.push({next_x, next_y});
        }
    }

    if (isvisited[H - 1][W - 1] == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
