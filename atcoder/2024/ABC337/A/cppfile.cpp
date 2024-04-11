#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int sum_a = 0, sum_ta = 0;

    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> X >> Y;
        sum_ta += X;
        sum_a += Y;
    }
    if (sum_ta > sum_a)
    {
        cout << "Takahashi" << endl;
    }
    else if (sum_ta < sum_a)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
