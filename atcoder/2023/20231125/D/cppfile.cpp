#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    long long num_row[N];
    long long num_colomun[N];
    string tmp[N];
    long long ans = 0;
    for (int i = 0; i < N; ++i)
    {
        num_row[i] = 0;
        num_colomun[i] = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> tmp[i];
        for (int j = 0; j < N; ++j)
        {
            if (tmp[i][j] == 'o')
            {
                num_row[i]++;
                num_colomun[j]++;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            {
                if (tmp[i][j] == 'o')
                {
                    ans += (num_row[i] - 1) * (num_colomun[j] - 1);
                }
            }
        }
    }
    cout << ans << endl;
}
