#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;

    vector<long long> each_tonakai;
    vector<long long> each_tonakai_sum;
    cin >> N >> Q;

    each_tonakai.push_back(0);
    for (int i = 0; i < N; ++i)
    {
        int R;
        cin >> R;
        each_tonakai.push_back(R);
    }

    sort(each_tonakai.begin(), each_tonakai.end());
    for (int i = 0; i < each_tonakai.size(); ++i)
    {
        if (i == 0)
        {
            each_tonakai_sum.push_back(each_tonakai[0]);
        }
        else
        {
            each_tonakai_sum.push_back(each_tonakai_sum[i - 1] + each_tonakai[i]);
        }
    }

    for (int i = 0; i < Q; ++i)
    {
        long long X;
        cin >> X;
        int lb = -1, ub = each_tonakai_sum.size();
        while (ub - lb > 1)
        {
            int mid = (lb + ub) / 2;
            if (each_tonakai_sum[mid] >= X)
            {
                ub = mid;
            }
            else
            {
                // cout << each_tonakai_sum[mid] << "," << mid << "," << X << endl;
                lb = mid;
            }
        }

        // cout << "hoge" << ub << endl;
        if (X == each_tonakai_sum[ub])
        {
            cout << ub << endl;
        }
        else
        {
            cout << ub - 1 << endl;
        }
    }
}
