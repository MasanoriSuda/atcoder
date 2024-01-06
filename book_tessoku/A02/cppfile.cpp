#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, X;
    vector<int> A;
    cin >> N >> X;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    for (int i = 0; i < N; ++i)
    {
        if (A[i] == X)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
