#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        int N, A, B;
        cin >> N >> A >> B;
        int bad = 0;
        int remain;
        bad = A * (2 * N - A + 1) - A;
        remain = N * N - bad;
        if (N < A)
        {
            cout << "No" << endl;
            continue;
        }

        // cout << i << "," << N * N << "," << bad << endl;
        if (B <= remain)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
