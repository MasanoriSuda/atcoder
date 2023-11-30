#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, M, D;
    cin >> N >> M >> D;

    vector<long long> A;
    vector<long long> B;

    for (int i = 0; i < N; ++i)
    {
        long long tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    for (int i = 0; i < M; ++i)
    {
        long long tmp;
        cin >> tmp;
        B.push_back(tmp);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    while (true)
    {
        long long a_size = A.size(), b_size = B.size();
        long long tmp_a, tmp_b;
        // cout << a_size << b_size << endl;
        if (a_size == 0 || b_size == 0)
        {
            cout << "-1" << endl;
            return 0;
        }

        tmp_a = A.back();
        tmp_b = B.back();

        if (abs(tmp_a - tmp_b) <= D)
        {
            cout << tmp_a + tmp_b << endl;
            return 0;
        }
        else
        {
            if (tmp_a > tmp_b)
            {
                A.pop_back();
            }
            else
            {
                B.pop_back();
            }
        }
    }
}
