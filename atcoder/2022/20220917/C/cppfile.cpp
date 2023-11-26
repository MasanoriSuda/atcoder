#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(void)
{
    unsigned long long N;
    vector<unsigned long long> v;

    cin >> N;

    // cout << N;

    v.push_back(0);

    for (int i = 0; i < 60; ++i)
    {

        if ((N & (1ll << i)) != 0)
        {
            // cout << i << endl;
            int size = v.size();
            for (int j = 0; j < size; ++j)
            {
                // cout << (v[j] | (N & (1 << i))) << endl;
                v.push_back(v[j] | (N & (1ll << i)));
            }
        }
    }

    for (auto a : v)
    {
        cout << a << endl;
    }
}
