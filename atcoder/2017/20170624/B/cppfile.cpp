#include <bits/stdc++.h>
using namespace std;

bool islighton[100000];

int main(void)
{
    int N;
    cin >> N;
    vector<int> v;
    islighton[0] = true;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int count = 0;
    int crntlight = 0;
    for (int i = 0; i < N; ++i)
    {
        islighton[crntlight] = false;
        islighton[v[crntlight] - 1] = true;
        crntlight = v[crntlight] - 1;
        // cout << v[i] - 1 << endl;
        count++;

        if (crntlight == 1)
        {
            cout << count << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}
