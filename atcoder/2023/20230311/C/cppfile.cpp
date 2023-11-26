#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int H, W;
    cin >> H >> W;

    int masu[H + W][H + W];

    for (int h = 0; h < H; ++h)
    {
        for (int w = 0; w < W; ++w)
        {
            int tmp;
            cin >> tmp;
            masu[h][w] = tmp;
        }
    }

    unsigned long long ans = 0;

    for (int i = 0; i < pow(2, (H - 1 + W - 1)); ++i)
    {
        int tmp = 0;
        set<int> s;
        int tmp_w = 0, tmp_h = 0;
        s.insert(masu[0][0]);
        for (int j = 0; j < (H - 1 + W - 1); ++j)
        {
            tmp = tmp + (1 << j) & i;
            if ((1 << j) & i)
            {
                tmp_w++;
                s.insert(masu[tmp_h][tmp_w]);
            }
            else
            {
                tmp_h++;
                s.insert(masu[tmp_h][tmp_w]);
            }
        }
        if (tmp_w == W - 1 && s.size() == H - 1 + W - 1 + 1)
        {
            // for (auto a : s)
            //     cout << a;

            ans++;
        }
    }
    cout << ans << endl;
}
