#include <iostream>
#include <vector>
using namespace std;

int n;
bool isprime(int a)
{
    if (a == 1)
        return false;
    else if (a == 2)
        return true;
    else if (a % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i * i <= a; i = i + 2)
        {
            if (a % i == 0)
                return false;
        }
        // cout << a << endl;
        return true;
    }
}

int main(void)
{
    int ans = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        ans += isprime(tmp);
    }
    cout << ans << endl;
}
