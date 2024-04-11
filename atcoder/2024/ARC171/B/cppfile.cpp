#include <bits/stdc++.h>
using namespace std;

#define UE 0
#define MIGI 1
#define SHITA 2
#define HIDARI 3

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(void)
{
    int H, W, N;
    cin >> H >> W >> N;
    char masu[H][W];
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            masu[i][j] = '.';
        }
    }

    int crntx = 0, crnty = 0;
    int direct = UE;
    for (int i = 0; i < N; ++i)
    {
        // cout << crntx << "," << crnty << endl;
        if (masu[crnty][crntx] == '.')
        {
            masu[crnty][crntx] = '#';
            if (direct == UE)
            {
                direct = MIGI;
            }
            else if (direct == MIGI)
            {
                direct = SHITA;
            }
            else if (direct == SHITA)
            {
                direct = HIDARI;
            }
            else if (direct == HIDARI)
            {
                direct = UE;
            }
            crntx = crntx + dx[direct];
            crnty = crnty + dy[direct];
        }
        else
        {
            masu[crnty][crntx] = '.';
            if (direct == UE)
            {
                direct = HIDARI;
            }
            else if (direct == HIDARI)
            {
                direct = SHITA;
            }
            else if (direct == SHITA)
            {
                direct = MIGI;
            }
            else if (direct == MIGI)
            {
                direct = UE;
            }
            crntx = crntx + dx[direct];
            crnty = crnty + dy[direct];
        }
        if (crntx == W)
        {
            crntx = 0;
        }
        if (crntx < 0)
        {
            crntx += W;
        }
        if (crnty == H)
        {
            crnty = 0;
        }
        if (crnty < 0)
        {
            crnty += H;
        }
    }
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            cout << masu[i][j];
        }
        cout << endl;
    }
}
