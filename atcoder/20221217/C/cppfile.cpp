#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    string S;
    cin >> N >> S;

    int iskukuri = 0;
    for (int i = 0; i < N; ++i)
    {
        if (S[i] == '"')
        {
            iskukuri = (iskukuri + 1) % 2;
        }
        if (S[i] == ',' && iskukuri == 0)
        {
            S[i] = '.';
        }
    }
    cout << S << endl;
}
