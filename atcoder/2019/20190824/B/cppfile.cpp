#include <bits/stdc++.h>
using namespace std;

int gyou_tentousuu_loop[2000];
int elem[2000];

int main(void)
{
    int N, K;
    cin >> N >> K;

    /*Nがループ内*/
    for (int i = 0; i < N; ++i)
    {
        cin >> elem[i];
    }

    /*Nがループ内*/
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {

            if (gyou_tentousuu_loop[i] > gyou_tentousuu_loop[(i + j) % N])
                gyou_tentousuu_loop[i]++;
        }
    }

    int sum = 0;
    int div = N / K;
    int modulo = N % K;
    if (N > 2 || N == 1 & modulo)
    {
        for (int i = 0; i < N; ++i)
        {
            if (i <= modulo)
            {
                sum = (sum + div * gyou_tentousuu_loop[i]) % 100000007;
            }
            else
            {
                sum = (sum + (div - 1) * gyou_tentousuu_loop[i]) % 100000007;
                ;
            }
        }
    }

    for (int i = modulo + 1; i < (N + modulo); ++i)
    {
        for (int j = i; j < (N + modulo); ++j)
        {
            if (elem[j] >)
            {
            }
        }
    }
}
