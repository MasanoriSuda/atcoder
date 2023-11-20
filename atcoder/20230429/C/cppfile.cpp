#include <bits/stdc++.h>
using namespace std;

int hoge[1000];
int main(void)
{
    int H, W;
    cin >> H >> W;
    string S[H];
    for (int i = 0; i < H; i++)
    {
        string tmp;
        cin >> tmp;
        S[i] = tmp;
        // cout << S[i] << endl;
    }

    for (int height = 0; height < H; ++height)
    {
        for (int width = 0; width < W; ++width)
        {
            if (S[height][width] == '#')
            {
                int curminheight = height, curmaxheight = height, curminwidth = width, curmaxwidth = width;
                int size = 0;
                while (true)
                {
                    if (curmaxheight >= H)
                        break;
                    if (curminheight < 0)
                        break;
                    if (curmaxwidth >= W)
                        break;
                    if (curminwidth < 0)
                        break;
                    if (S[curmaxheight][curmaxwidth] != '#')
                        break;
                    if (S[curmaxheight][curminwidth] != '#')
                        break;
                    if (S[curminheight][curmaxwidth] != '#')
                        break;
                    if (S[curminheight][curminwidth] != '#')
                        break;
                    size++;
                    curmaxheight++;
                    curmaxwidth++;
                    curminheight--;
                    curminwidth--;
                }
                if (size >= 2)
                    hoge[size - 2]++;
            }
        }
    }
    for (int i = 0; i < min(W, H); i++)
    {
        cout << hoge[i];
        if (i != min(H, W) - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
