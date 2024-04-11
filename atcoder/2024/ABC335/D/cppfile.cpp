#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int masu[N][N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            masu[i][j] = 0;
        }
    }

    int direct = 0;
    int counter = 1;
    int width = 0, height = 0;
    for (int i = 0; i < N * N - 1; ++i)
    {
        if (direct == 0)
        {
            masu[height][width] = counter;
            if (width + 1 < N && masu[height][width + 1] == 0)
            {
                width++;
            }
            else
            {
                direct = 1;
                height++;
            }
        }
        else if (direct == 1)
        {
            masu[height][width] = counter;
            if (height + 1 < N && masu[height + 1][width] == 0)
            {
                height++;
            }
            else
            {
                direct = 2;
                width--;
            }
        }
        else if (direct == 2)
        {
            masu[height][width] = counter;
            if (width - 1 >= 0 && masu[height][width - 1] == 0)
            {
                width--;
            }
            else
            {
                direct = 3;
                height--;
            }
        }
        else if (direct == 3)
        {
            masu[height][width] = counter;
            if (height - 1 >= 0 && masu[height - 1][width] == 0)
            {
                height--;
            }
            else
            {
                direct = 0;
                width++;
            }
        }
        counter++;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (masu[i][j] != 0)
            {
                cout << masu[i][j];
            }
            else
            {
                cout << "T";
            }
            if (j != N - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
