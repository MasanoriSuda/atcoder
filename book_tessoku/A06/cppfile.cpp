#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;
    vector<int> A;
    vector<int> B;
    int ans = 0;
    cin >> N >> Q;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    for (int i = 0; i < N; ++i)
    {
        if (i == 0)
        {
            B.push_back(A[i]);
            // cout << B[i] << endl;
        }
        else
        {
            B.push_back(B[i - 1] + A[i]);
            // cout << B[i] << endl;
        }
    }

    for (auto a : B)
    {
        // cout << a << endl;
    }

    for (int i = 0; i < Q; ++i)
    {
        int L, R;
        cin >> L >> R;
        int tmp = 0;
        if (L != 1)
        {
            tmp += B[R - 1] - B[L - 2];
        }
        else
        {
            tmp += B[R - 1];
        }
        cout << tmp << endl;
    }
}
