#include <bits/stdc++.h>
using namespace std;

int binserch(vector<int> A, int N, int x)
{
    int min = -1;
    int max = N;
    int mid;

    while (max - min > 1)
    {
        mid = (min + max) / 2;
        if (A[mid] >= x)
        {
            max = mid;
        }
        else
        {
            min = mid;
        }
    }
    return max;
}

int main(void)
{
    int N;
    vector<int> A;
    vector<int> sleeping_time;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    int Q;

    for (int i = 1; i < N; i += 2)
    {
        sleeping_time.push_back(A[i + 1] - A[i]);
    }

    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int L, R;
        int ans = 0;
        cin >> L >> R;
        int min = binserch(A, A.size(), L);
        if (L != A[min])
            min--;
        int max = binserch(A, A.size(), R);
        // cout << min << max << endl;

        if (min % 2 == 0)
            min++; // 奇数になる
        if (max % 2 != 0)
            max--; // 偶数になる

        for (int j = min / 2; j <= max / 2; j = j + 2)
        {
            ans += sleeping_time[j];
        }

        if (A[min] < L)
        {
            ans -= L - A[min];
        }

        if (A[max] > R)
        {
            ans -= A[max] - R;
        }

        cout << ans << endl;
    }
}
