#include <bits/stdc++.h>
using namespace std;

char masu[100][100];

int main(void)
{
    int H, W;
    cin >> H >> W;

    for (int height = 0; height < H; ++height)
    {
        for (int width = 0; width < W; ++width)
        {
            char tmp_char;
            cin >> tmp_char;
            masu[height][width] = tmp_char;
        }
    }

    for (int height = 0; height < H; ++height)
    {
        for (int width = 1; width < W; ++width)
        {
            if (masu[height][width - 1] == 'T' && masu[height][width] == 'T')
            {
                masu[height][width - 1] = 'P';
                masu[height][width] = 'C';
            }
        }
    }

    for (int height = 0; height < H; ++height)
    {
        for (int width = 0; width < W; ++width)
        {
            cout << masu[height][width];
        }
        cout << endl;
    }
}
