#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int H, W;
    cin >> H >> W;
    int masu[H][W];
    vector<int> masu_H(H, 0);
    vector<int> masu_W(W, 0);
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < H; ++j)
        {
            cin >> masu[i][j];
        }
    }

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            masu_W[j] += masu[i][j];
            masu_H[i] += masu[i][j];
        }
    }

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (j)
            {
                cout << " ";
            }
            cout << masu_W[j] + masu_H[i] - masu[i][j];
        }
        cout << endl;
    }
}
