#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int N, M;
int bsearch(int num)
{
    int lp = -1;
    int mp = N;
    int mid;
    while (mp - lp > 1)
    {
        mid = (lp + mp) / 2;
        if (v[mid] >= num)
        {
            mp = mid;
        }
        else
        {
            lp = mid;
        }
    }
    // cout << v[mid] << lp << mp << endl;
    return mp;
}

int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        // cout << v[i] << endl;
        int lp = bsearch(v[i]);
        int mp = bsearch(v[i] + M);
        sum = max(sum, mp - lp);

        if (mp - lp == 8)
        {
            // cout << mp << lp << endl;
            //  cout << v[i] << endl;
            //  cout << v[i] + M << endl;
        }
    }

    cout << sum << endl;
}
