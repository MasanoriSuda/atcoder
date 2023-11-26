#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, L, R;
    vector<int> A;

    cin >> N >> L >> R;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;

        int y_a;
        // Y-Aの最小値
        if (L <= tmp && tmp <= R)
        {
            A.push_back(tmp);
        }
        else if (tmp < L)
        {
            A.push_back(L);
        }
        else
        {
            A.push_back(R);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (i)
            cout << " ";
        cout << A[i];
    }
    cout << endl;
}
