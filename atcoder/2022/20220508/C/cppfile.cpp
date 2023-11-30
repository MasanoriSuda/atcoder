#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000001

int main(void)
{
    int N;
    cin >> N;

    vector<pair<int, int>> v;
    map<int, int> st_r;
    map<int, int> st_l;
    for (int i = 0; i < N; ++i)
    {
        int tmp_x, tmp_y;
        cin >> tmp_x >> tmp_y;
        v.push_back({tmp_x, tmp_y});
    }
    string s;
    cin >> s;
    for (int i = 0; i < N; ++i)
    {
        if (s[i] == 'R')
        {
            if (st_r[v[i].second])
                else if (v[i].first > is_rmax[v[i].second])
                {
                    is_rmax[v[i].second] = v[i].first;
                }
        }
        else
        {
            is_l[v[i].second] = true;
            if (v[i].first < is_lmin[v[i].second])
            {
                is_lmin[v[i].second] = v[i].first;
            }
        }
    }

    bool isok = false;

    cout << "hoge" << endl;

    for (int i = 0; i < MAX; ++i)
    {
        // out << is_r[i] << is_l[i] << endl;
        if (is_r[i] == true && is_l[i] == true && is_lmin[i] < is_rmax[i])
        {
            isok = true;
        }
    }
    if (isok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
