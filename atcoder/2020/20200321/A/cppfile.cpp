#include <bits/stdc++.h>
using namespace std;

int dx[2] = {1, 0};
int dy[2] = {0, 1};

pair<int, int> weight[100][100];
int main(void)
{
    int H, W;
    cin >> H >> W;
    string S[H];

    for (int height = 0; height < H; ++height)
    {
        string tmp;
        cin >> tmp;
        S[height] = tmp;
    }

    queue<pair<int, int>> que;
    que.push({0, 0});
    weight[0][0].first = 1;
    if (S[0][0] == '#')
    {
        weight[0][0].second = 1;
    }

    while (!que.empty())
    {
        pair<int, int> tmp_pair;
        int crntx, crnty;
        tmp_pair = que.front();
        que.pop();
        crntx = tmp_pair.first;
        crnty = tmp_pair.second;

        for (int i = 0; i < 2; ++i)
        {
            int nextx, nexty;
            nextx = crntx + dx[i];
            nexty = crnty + dy[i];
            if (nextx < 0 || nextx >= W || nexty < 0 || nexty >= H)
                continue;
            // cout << nextx << nexty << endl;
            if (weight[nexty][nextx].first != 0)
            {
                if (weight[nexty][nextx].first <= weight[crnty][crntx].first)
                    continue;

                if (weight[nexty][nextx].second <= weight[crnty][crntx].second)
                    continue;
            }
            weight[nexty][nextx].first = weight[crnty][crntx].first + 1;
            if (S[nexty][nextx] == '#')
            {
                weight[nexty][nextx].second = weight[crnty][crntx].second + 1;
            }
            else
            {
                weight[nexty][nextx].second = weight[crnty][crntx].second;
            }
            que.push({nextx, nexty});
        }
    }
    cout << weight[H - 1][W - 1].second << endl;
}
