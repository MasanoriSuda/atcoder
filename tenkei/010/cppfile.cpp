#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> kumi1(100001, 0);
    vector<int> kumi2(100001, 0);

    for (int i = 1; i <= N; ++i)
    {
        int C, P;
        cin >> C >> P;
        if (C == 1)
        {
            kumi1[i] = P;
        }
        else
        {
            kumi2[i] = P;
        }
    }

    for (int i = 1; i <= N; ++i)
    {
        kumi1[i] += kumi1[i - 1];
        kumi2[i] += kumi2[i - 1];
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int L, R;
        cin >> L >> R;
        cout << kumi1[R] - kumi1[L - 1] << " " << kumi2[R] - kumi2[L - 1] << endl;
    }
}
