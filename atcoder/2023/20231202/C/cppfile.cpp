#include <bits/stdc++.h>
using namespace std;

unsigned long long mp_1[1000001];

int main(void)
{

    int N;
    vector<unsigned long long> nums;
    vector<unsigned long long> v;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    unsigned long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        mp_1[v[i] - 1] = sum; // v1以上
    }

    for (int i = 1000000; i > 0; i--)
    {
        mp_1[i - 1] = max(mp_1[i - 1], mp_1[i]);
        // out << mp_1[i] << endl;
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (i)
            cout << " ";
        cout << mp_1[nums[i]];
    }
    cout << endl;
}
