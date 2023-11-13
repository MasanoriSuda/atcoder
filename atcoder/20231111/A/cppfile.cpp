#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, X;
    int sum = 0;

    cin >> N;
    cin >> X;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        // cout << tmp;
        if (tmp <= X)
        {
            sum += tmp;
        }
    }

    cout << sum << endl;
}
