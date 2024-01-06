#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N, A, B;
    cin >> N >> A >> B;

    int sum_N = (1 + N) * N / 2;
    int sum_A = (1 + (N / A)) * (N / A) * A / 2;
    int sum_B = (1 + (N / B)) * (N / B) * B / 2;
    int sum_AB = (1 + (N / (A * B))) * (N / (A * B)) * (A * B) / 2;

    cout << sum_N - sum_A - sum_B + sum_AB << endl;
}
