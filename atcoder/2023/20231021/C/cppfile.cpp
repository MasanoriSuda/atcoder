#include <bits/stdc++.h>
using namespace std;

char MASU[1000][1000];

bool isVisited[1000][1000];

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void bfs(int W, int H)
{
    int sum = 0;
    bool isAllVisited;
    for (int height = 0; height < H; ++height)
    {
        for (int width = 0; width < W; ++width)
        {

            if (MASU[height][width] == '.' || isVisited[height][width] == true)
                continue;

            stack<pair<int, int>> stk;
            stk.push(make_pair(width, height));
            isVisited[height][width] = true;

            // cout << startidx_x << "," << startidx_y << endl;

            while (!stk.empty())
            {
                int startidx_x, startidx_y;
                pair<int, int> tmp_pair = stk.top();
                stk.pop();
                // cout << tmp_pair.first << tmp_pair.second << sum << endl;
                startidx_x = tmp_pair.first;
                startidx_y = tmp_pair.second;
                for (int happou = 0; happou < 8; happou++)
                {
                    // cout << dx[happou] + startidx_x << "," << dy[happou] + startidx_y << "," << sum << endl;
                    if (dx[happou] + startidx_x < 0 || dx[happou] + startidx_x >= W ||
                        dy[happou] + startidx_y < 0 || dy[happou] + startidx_y >= H ||
                        MASU[dy[happou] + startidx_y][dx[happou] + startidx_x] != '#' ||
                        isVisited[dy[happou] + startidx_y][dx[happou] + startidx_x] != false)
                        continue;

                    stk.push(make_pair(dx[happou] + startidx_x, dy[happou] + startidx_y));
                    isVisited[dy[happou] + startidx_y][dx[happou] + startidx_x] = true;
                    // cout << dx[happou] + startidx_x << "," << dy[happou] + startidx_y << "," << sum << endl;
                }
            }
            sum++;
        }
    }
    cout << sum << endl;
}

int main(void)
{
    int H, W;
    cin >> H >> W;
    for (int height = 0; height < H; height++)
    {
        for (int width = 0; width < W; width++)
        {
            cin >> MASU[height][width];
            isVisited[height][width] = false;
        }
    }
    bfs(W, H);
}
