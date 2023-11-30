#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> sankousho[N];
    int sankousho_money[N];

    for (int i = 0; i < N; ++i)
    {
        int hoge;
        cin >> hoge;
        sankousho_money[i] = hoge;
        // cout << sankousho_money[i];
        for (int j = 0; j < M; ++j)
        {
            int tmp;
            cin >> tmp;
            sankousho[i].push_back(tmp);
            // cout << sankousho[i][j];
        }
        // cout << endl;
    }

    int ans = 1 << 30;
    for (int i = 0; i < pow(2, N); ++i)
    {
        int money = 0;
        vector<int> rikaido(M, 0);
        for (int j = 0; j < N; ++j)
        {
            if ((i & (1 << j)))
            {
                for (int k = 0; k < M; ++k)
                {
                    rikaido[k] += sankousho[j][k];
                }
                money += sankousho_money[j];
            }
        }
        bool isSatisfied = true;
        for (int j = 0; j < M; ++j)
        {
            if (rikaido[j] < X)
                isSatisfied = false;
        }
        if (isSatisfied == true)
        {
            ans = min(money, ans);
        }
    }

    if (ans == (1 << 30))
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
