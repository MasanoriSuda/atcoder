#include <bits/stdc++.h>
using namespace std;

int A[300000];
int B[300000];

int main(void)
{
    int N, Q;
    string S;

    cin >> N;
    cin >> Q;
    cin >> S;

    /*A[i] = S[i-1]とS[i]の値比較*/
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            A[i] = 0;
        else
            A[i] = (S[i] == S[i - 1]) ? 1 : 0;
    }

    /*総和*/
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            B[i] = A[i];
        else
            B[i] = B[i - 1] + A[i];
    }

    for (int i = 0; i < Q; i++)
    {
        int L, R;
        cin >> L >> R;
        cout << B[R - 1] - B[L - 1] << endl;
    }
}
