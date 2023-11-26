#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long A, B;
    cin >> A >> B;
    unsigned long long sum = 0;

    if (A < B)
    {
        swap(A, B);
        // cout << A << "," << B << endl;
    }

    while (B > 0)
    {
        // cout << A << "," << B << endl;
        sum += A / B;
        A = A % B;
        swap(A, B);
        // cout << sum << endl;
    }

    cout << sum - 1 << endl;
}
