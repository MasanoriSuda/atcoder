#include <bits/stdc++.h>
using namespace std;

bool hoge[300001];

int main(void)
{
    int N;
    cin >> N;

    vector<int> Q;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        Q.push_back(tmp);
    }
    vector<int> A;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    vector<int> B;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }

    int A_min = 1 << 29;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] == 0)
            continue;
        if (A_min > Q[i] / A[i] || A_min == 1 << 29)
        {
            A_min = Q[i] / A[i];
        }
        // cout << Q[i] / A[i] << endl;
    }
    // cout << A_min << endl;

    int max = 0;
    for (int i = 0; i <= A_min; ++i)
    {
        int B_min = 1 << 29;
        vector<int> Q_remain;
        for (int j = 0; j < N; ++j)
        {
            Q_remain.push_back(Q[j] - i * A[j]);
        }
        for (int j = 0; j < N; ++j)
        {
            if (B[j] == 0)
            {
                continue;
            }
            if (B_min > Q_remain[j] / B[j] || B_min == 1 << 29)
            {
                B_min = Q_remain[j] / B[j];
            }
        }
        if (max < i + B_min)
        {
            max = i + B_min;
        }
    }
    cout << max << endl;
}
