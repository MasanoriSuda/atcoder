#include <bits/stdc++.h>
using namespace std;

int nyuujousa[100001];
int nyuujou[100001];
int main(void)
{
    int N, X;
    cin >> N >> X;
    vector<int> A;
    int left = 0, right = N;
    int mid;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    while (left < right)
    {
        mid = (left + right) / 2;
        if (A[mid] == X)
        {
            cout << mid + 1 << endl;
            return 0;
        }
        else if (A[mid] < X)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return 0;
}
