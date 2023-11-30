#include <bits/stdc++.h>
using namespace std;

bool isSatisfied[51][10001];

int main(void)
{
    int N, X;
    cin >> N >> X;

    isSatisfied[0][0] = true;
    for (int i = 1; i <= N; ++i)
    {
        int A, B;
        cin >> A >> B;
        for (int j = 0; j <= X; ++j)
        {
            for (int k = 0; k <= B; ++k)
            {
                if (j - k * A >= 0)
                {
                    if (isSatisfied[i - 1][j - k * A] == true)
                    {
                        isSatisfied[i][j] = true;
                    }
                }
            }
        }
    }

    for (int i = 0; i <= N; ++i)
    {
        for (int j = 0; j <= X; ++j)
        {
            int val = (isSatisfied[i][j]) ? 1 : 0;
            // cout << val;
        }
        // cout << endl;
    }

    if (isSatisfied[N][X])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
