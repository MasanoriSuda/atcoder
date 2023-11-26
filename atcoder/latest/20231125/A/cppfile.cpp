#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, L;

    cin >> N >> L;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;

        if (tmp >= L)
        {
            sum++;
        }
    }

    cout << sum << endl;
}
