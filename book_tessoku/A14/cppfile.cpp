#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    vector<int> D;

    vector<int> E;
    vector<int> F;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        C.push_back(tmp);
    }
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        D.push_back(tmp);
    }

    for (int i = 0; i < A.size(); ++i)
    {
        for (int j = 0; j < B.size(); ++j)
        {
            E.push_back(A[i] + B[j]);
        }
    }

    for (int i = 0; i < C.size(); ++i)
    {
        for (int j = 0; j < D.size(); ++j)
        {
            F.push_back(C[i] + D[j]);
        }
    }

    sort(F.begin(), F.end());

    for (int i = 0; i < E.size(); ++i)
    {
        auto it = lower_bound(F.begin(), F.end(), K - E[i]);
        int pos = distance(F.begin(), it);
        if (it != F.end() && E[i] + F[pos] == K)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
