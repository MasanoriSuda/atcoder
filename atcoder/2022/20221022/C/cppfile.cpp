#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
vector<int> v;
int main(void)
{
    int N;

    cin >> N;

    v.push_back(0);
    mp[1] = 0;

    for (int i = 1; i <= N; ++i)
    {
        int A;
        cin >> A;
        mp[2 * i] = mp[A] + 1;
        v.push_back(mp[2 * i]);
        mp[2 * i + 1] = mp[A] + 1;
        v.push_back(mp[2 * i + 1]);
    }

    for (auto a : v)
    {
        cout << a << endl;
    }
}
