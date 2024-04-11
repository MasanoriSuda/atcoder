#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A[N], B[N];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int tmp;
            cin >> tmp;
            if (tmp == 1)
            {
                A[i].push_back(j + 1);
                B[j].push_back(i + 1);
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        // cout << A[i].size();
        for (int j = 0; j < A[i].size(); ++j)
        {
            if (j)
                cout << " ";
            cout << A[i].at(j);
        }
        cout << endl;
    }
    return 0;
}
