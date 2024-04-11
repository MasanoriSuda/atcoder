#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    if (N % 2 == 0)
    {
        for (int i = 0; i < pow(2, N); ++i)
        {
            int depth = 0;
            for (int j = 0; j < N; ++j)
            {
                // cout << (i >> (N - 1 - j)) << endl;
                if (((i >> (N - 1 - j)) & 1) == 0)
                {
                    depth++;
                }
                else
                {
                    depth--;
                }
                if (depth < 0)
                {
                    break;
                }
            }
            // cout << depth << endl;
            if (depth == 0)
            {
                // cout << i << endl;
                for (int j = 0; j < N; ++j)
                {
                    if (((i >> (N - 1 - j)) & 1) == 0)
                    {
                        cout << "(";
                    }
                    else
                    {
                        cout << ")";
                    }
                }
                cout << endl;
            }
        }
    }
}
