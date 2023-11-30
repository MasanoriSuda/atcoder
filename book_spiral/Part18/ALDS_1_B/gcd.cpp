#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    // cout << a << b << endl;
    if (b == 0)
    {
        return a;
    }
    else
    {
        int r = a % b;
        return gcd(b, r);
    }
}

int main(void)
{
    int x, y, a, b;
    cin >> x >> y;
    if (x > y)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }

    cout << gcd(a, b) << endl;
}
