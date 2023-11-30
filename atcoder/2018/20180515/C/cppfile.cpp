#include <bits/stdc++.h>
using namespace std;

int idx_x[4] = {-1, 1, 0, 0};
int idx_y[4] = {0, 0, -1, 1};
int main(void)
{
    int H, W;
    cin >> H >> W;
    string masu[H];
    for (int i = 0; i < H; ++i)
    {
        string tmp;
        cin >> tmp;
        masu[i] = tmp;
    }

    bool isenablepaint = true;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (masu[i][j] == '#')
            {
                int num_enable_black = 0;
                for (int k = 0; k < 4; ++k)
                {
                    int tmp_x = j + idx_x[k];
                    int tmp_y = i + idx_y[k];
                    if (tmp_x >= 0 && tmp_x < W && tmp_y >= 0 && tmp_y < H)
                    {
                        // cout << i << j << tmp_y << tmp_x << endl;
                        if (masu[tmp_y][tmp_x] == '#')
                        {
                            num_enable_black++;
                        }
                    }
                }
                if (num_enable_black == 0)
                {
                    // cout << i << j << endl;
                    isenablepaint = false;
                }
            }
        }
    }
    if (isenablepaint)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
