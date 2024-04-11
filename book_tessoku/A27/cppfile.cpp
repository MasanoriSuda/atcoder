#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B)
{
    int ret;
    if (B == 0)
    {
        ret = A;
    }
    else
    {
        // cout << B << "," << A % B << endl;
        ret = gcd(B, A % B);
    }
    return ret;
}

int main(void)
{
    int A, B;
    cin >> A >> B;
    if (A < B)
        swap(A, B);
    cout << gcd(A, B) << endl;
}
