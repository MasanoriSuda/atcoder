#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M, P;
    cin >> N >> M >> P;

    vector<int> A, B;
    vector<long long> sum(N + 1);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < M; i++)
    {

        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }

    // A+B<Pの場合を考えて、主菜の総和を出しておく
    for (int i = 1; i <= N; i++)
    {
        sum[i] = sum[i - 1] + A[i - 1];
    }

    unsigned long long ans = 0;
    for (auto a : B)
    {
        int hoge = lower_bound(A.begin(), A.end(), P - a) - A.begin();

        ans += (unsigned long long)sum[hoge] + a * hoge; // P未満のときの総和
        // cout << hoge << endl;
        // cout << P - a << endl;
        ans += (unsigned long long)(N - hoge) * P;
    }

    cout << ans << endl;
}
