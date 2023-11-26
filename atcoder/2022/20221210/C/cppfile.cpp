#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N, T;
    unsigned long long hoge[500000];

    cin >> N >> T;

    unsigned long long total = 0;
    for (unsigned long long i = 0; i < N; ++i)
    {
        unsigned long long tmp;
        cin >> tmp;
        hoge[i] = tmp;
        total += tmp;
    }

    T = T % total;

    for (unsigned long long i = 0; i < N; i++)
    {
        if (hoge[i] >= T)
        {
            cout << i + 1 << " " << T << endl;
            return 0;
        }
        else
        {
            T -= hoge[i];
            // cout << T << endl;
        }
    }
}
