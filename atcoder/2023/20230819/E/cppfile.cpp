#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    vector<int> v[300001];

    vector<int> best;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int F, S;
        cin >> F >> S;
        v[F].push_back(S);
    }

    for (int i = 0; i <= N; i++)
    {
        sort(v[i].begin(), v[i].end());
        reverse(v[i].begin(), v[i].end());
    }

    int res = 0;
    for (int i = 0; i <= N; i++)
    {
        if (v[i].size() >= 2)
        {
            // cout << "hoge" << endl;
            int tmp_res;
            tmp_res = v[i][0] + v[i][1] / 2;
            // cout << v[i][0] << v[i][1] << endl;
            res = max(tmp_res, res);
        }
        if (v[i].size() >= 1)
        {
            best.push_back(v[i][0]);
        }
    }
    sort(best.begin(), best.end());
    reverse(best.begin(), best.end());

    // cout << res << endl;

    if (best.size() >= 2)
        res = max(res, best[0] + best[1]);

    cout << res << endl;
}
