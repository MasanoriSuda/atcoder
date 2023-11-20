#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
vector<int> v;
int main(void)
{
    int N;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
        v.push_back(tmp);
    }

    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << it->second << endl;
    }

    for (int i = 0; i < N - mp.size(); i++)
    {
        cout << "0" << endl;
    }
}
