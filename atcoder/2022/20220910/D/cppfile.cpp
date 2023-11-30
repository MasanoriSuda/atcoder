#include <bits/stdc++.h>
using namespace std;

int dx[6] = {1, 1, 0, -1, -1, 0};
int dy[6] = {0, 1, 1, 0, -1, -1};

bool isblack[2001][2001];
bool isused[2001][2001];
int main(void)
{
    int N;
    cin >> N;
    int X, Y;
    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> X >> Y;
        isblack[Y + 1000][X + 1000] = true;
        // cout << X << Y << endl;
    }

    int ans = 0;
    for (int y = -1000; y <= 1000; ++y)
    {
        for (int x = -1000; x <= 1000; ++x)
        {
            if (isblack[y + 1000][x + 1000] == true && isused[y + 1000][x + 1000] == false)
            {
                queue<pair<int, int>> que;
                que.push({y, x});
                // cout << ":" << y << x << endl;
                isused[y + 1000][x + 1000] = true;
                while (!que.empty())
                {
                    pair<int, int> tmp = que.front();
                    que.pop();
                    int tmpx = tmp.second, tmpy = tmp.first;
                    for (int i = 0; i < 6; ++i)
                    {
                        int newx = tmpx + dx[i], newy = tmpy + dy[i];
                        if (abs(newx) > 1000 || abs(newy) > 1000)
                            continue;
                        if (isblack[newy + 1000][newx + 1000] == false)
                            continue;
                        if (isused[newy + 1000][newx + 1000] == true)
                            continue;
                        que.push({newy, newx});
                        // cout << newy << newx << endl;
                        isused[newy + 1000][newx + 1000] = true;
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
}
