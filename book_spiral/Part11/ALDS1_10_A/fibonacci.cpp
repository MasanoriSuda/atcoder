#include <iostream>
using namespace std;

int dp[50];

int fibonacchi(int i)
{
    if (i == 0 || i == 1)
    {
        return dp[i] = 1;
    }
    else
    {
        if (dp[i] != 0)
        {
            return dp[i];
        }
        else
        {
            return dp[i] = fibonacchi(i - 1) + fibonacchi(i - 2);
        }
    }
}

int main(void)
{
    int n;
    cin >> n;
    cout << fibonacchi(n) << endl;
}
