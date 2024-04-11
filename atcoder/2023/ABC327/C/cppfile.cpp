#include <bits/stdc++.h>
using namespace std;

int hogehoge[2 * 100000];

int main()
{

    int masu[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> masu[i][j];
        }
    }

    bool issatis = true;

    vector<int> hoge;
    // よこ
    for (int i = 0; i < 9; ++i)
    {
        hoge.clear();
        for (int j = 0; j < 9; ++j)
        {
            hoge.push_back(masu[i][j]);
        }
        for (int j = 1; j <= 9; ++j)
        {
            if (find(hoge.begin(), hoge.end(), j) == hoge.end())
            {
                issatis = false;
            }
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        hoge.clear();
        for (int j = 0; j < 9; ++j)
        {
            hoge.push_back(masu[j][i]);
        }
        for (int j = 1; j <= 9; j++)
        {
            if (find(hoge.begin(), hoge.end(), j) == hoge.end())
            {
                issatis = false;
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int idx_x = 3 * i;
            int idx_y = 3 * j;

            hoge.clear();
            for (int i2 = 0; i2 < 3; ++i2)
            {
                for (int j2 = 0; j2 < 3; ++j2)
                {
                    hoge.push_back(masu[idx_y + j2][idx_x + i2]);
                }
            }
            for (int k = 1; k <= 9; k++)
            {
                if (find(hoge.begin(), hoge.end(), k) == hoge.end())
                {
                    issatis = false;
                }
            }
        }
    }

    if (issatis == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
