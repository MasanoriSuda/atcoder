#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> P, Q, A;
    for (int i = 1; i <= N; ++i)
    {
        A.push_back(i);
    }
    for (int i = 1; i <= N; ++i)
    {
        int tmp;
        cin >> tmp;
        P.push_back(tmp);
    }

    for (int i = 1; i <= N; ++i)
    {
        int tmp;
        cin >> tmp;
        Q.push_back(tmp);
    }

    int x, y, counter;
    counter = 0;
    do
    {
        bool issame_x = true;
        bool issame_y = true;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] != P[i])
            {
                issame_x = false;
            }
            if (A[i] != Q[i])
            {
                issame_y = false;
            }
        }
        if (issame_x == true)
        {
            x = counter;
        }
        if (issame_y == true)
        {
            y = counter;
        }
        counter++;
    } while (next_permutation(A.begin(), A.end()));

    cout << abs(x - y) << endl;
}
