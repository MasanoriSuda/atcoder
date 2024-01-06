#include <bits/stdc++.h>
using namespace std;

unsigned long long gcd(int a, int b)
{
    if (b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main(void)
{
    unsigned long long N, A, B;
    cin >> N >> A >> B;

    if (A < B)
        swap(A, B);

    unsigned long long gdc_val = A * B / gcd(A, B);

    unsigned long long sum_N = (1 + N) * N / 2;
    unsigned long long sum_A = (1 + (N / A)) * (N / A) * A / 2;
    unsigned long long sum_B = (1 + (N / B)) * (N / B) * B / 2;
    unsigned long long sum_AB = (1 + (N / (gdc_val))) * (N / (gdc_val)) * gdc_val / 2;

    cout << sum_N - sum_A - sum_B + sum_AB << endl;
}
