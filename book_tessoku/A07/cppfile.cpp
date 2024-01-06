#include <bits/stdc++.h>
using namespace std;

int nyuujousa[100001];
int nyuujou[100001];
int main(void)
{
    int D, N;

    int ans = 0;
    cin >> D >> N;

    for (int i = 0; i < N; ++i)
    {
        int L, R;
        cin >> L >> R;
        nyuujousa[L]++;
        nyuujousa[R + 1]--;
    }

    for (int i = 1; i <= D; ++i)
    {
        nyuujou[i] += nyuujou[i - 1] + nyuujousa[i];
    }

    for (int i = 1; i <= D; ++i)
    {
        cout << nyuujou[i] << endl;
    }
}
