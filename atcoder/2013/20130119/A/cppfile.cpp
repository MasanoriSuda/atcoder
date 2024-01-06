#include <bits/stdc++.h>
using namespace std;

bool islighton[100000];

int main(void)
{
    int m, n, N;
    cin >> m >> n >> N;

    int ans = N;

    int enpitsu_notused_sum = 0;
    int hanbal_enpitsu = N;

    for (int i = 0; i < 10; i++)
    {
        int init_ans = ans;
        ans += hanbal_enpitsu / m * n;
        hanbal_enpitsu = hanbal_enpitsu / m * n;
        enpitsu_notused_sum += hanbal_enpitsu % m;
        ans += enpitsu_notused_sum / m * n;
        hanbal_enpitsu += enpitsu_notused_sum / m * n;
        enpitsu_notused_sum = enpitsu_notused_sum % m;
        if (init_ans == ans)
        {
            break;
        }
        cout << init_ans << "," << ans << "," << enpitsu_notused_sum << endl;
    }

    cout << ans << endl;
}
