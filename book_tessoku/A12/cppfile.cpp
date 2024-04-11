#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> A, int N, int K, int time)
{
    long long sum = 0;
    for (int i = 0; i < N; ++i)
    {
        sum += time / A[i];
    }
    if (sum >= K)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> A;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    int low = 1;
    int high = 1 << 30;

    bool issatisfied;
    while (low < high)
    {
        int mid = (low + high) / 2;
        issatisfied = solve(A, N, K, mid);
        if (issatisfied == false)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout << low << endl;

    return 0;
}
