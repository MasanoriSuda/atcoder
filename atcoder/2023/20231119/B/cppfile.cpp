#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    vector<int> A;
    int max_max = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
        // cout << tmp;
    }
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    max_max = A[0];
    for (int i = 0; i < N; i++)
    {
        // cout << A[i];
        //  cout << A[i];
        if (A[i] != max_max)
        {
            cout << A[i] << endl;
            return 0;
        }
    }
    return 0;
}
