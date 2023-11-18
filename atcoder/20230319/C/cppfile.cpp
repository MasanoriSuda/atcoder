#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N, M;
    cin >> N >> M;

    vector<unsigned long long> A(N), B(M);

    vector<unsigned long long> C(N + M);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        A[i] = tmp;
    }

    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        B[i] = tmp;
    }

    merge(begin(A), end(A), begin(B), end(B), begin(C));

    for (auto tmp : A)
    {
        cout << lower_bound(begin(C), end(C), tmp) - begin(C) + 1 << " ";
    }

    cout << endl;

    for (auto tmp : B)
    {
        cout << lower_bound(begin(C), end(C), tmp) - begin(C) + 1 << " ";
    }
    cout << endl;
}
