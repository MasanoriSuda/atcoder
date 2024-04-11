#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<unsigned long long> A;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    vector<int> S, T;
    for (int i = 0; i < N - 1; ++i)
    {
        int tmp;
        cin >> tmp;
        S.push_back(tmp);
        cin >> tmp;
        T.push_back(tmp);
        // cout << A[i] << S[i] << T[i] << endl;
    }

    for (int i = 0; i < N - 1; ++i)
    {
        A[i + 1] += (A[i] / S[i]) * T[i];
    }

    cout << A[N - 1] << endl;
    return 0;
}
