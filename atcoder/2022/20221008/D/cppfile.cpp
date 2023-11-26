#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> mp_h;
map<int, vector<int>> mp_w;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void)
{
    int H, W, N;
    int curr, curc;
    cin >> H >> W >> curr >> curc;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp_curr, tmp_curc;
        cin >> tmp_curr >> tmp_curc;
        mp_h[tmp_curr].push_back(curc);
        mp_w[tmp_curc].push_back(curr);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < N; i++)
    {
        int D, L;
        cin >> D >> L;
        if (D == 'L') // 右
        {
            int tmp = curr;
            for (int i = tmp; i < tmp + L;)
            {
                if (find(mp_w[curc].begin(), mp_w[curc].end(), i + 1) != mp_w[curc].end())
                {
                    break;
                }
                i++;
                curc++;
            }
            if (curc + L >= W)
            {
                curc = H - 1;
            }
        }
        else if (D == 'R') // 左
        {
            int tmp = curr;
            for (int i = tmp; i < tmp + L;)
            {
                if (find(mp_w[curc].begin(), mp_w[curc].end(), i + 1) != mp_w[curc].end())
                {
                    break;
                }
                i++;
                curc++;
            }
            if (curc + L >= W)
            {
                curc = H - 1;
            }
        }
        else if (D == 'U') // 上
        {
        }
        else if (D == 'D') // 下
        {
        }
    }

    return 0;
}
