#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int ans = 0;
    set<string> mp;
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        if (mp.count(tmp) == 0)
        {
            mp.insert(tmp);
            reverse(tmp.begin(), tmp.end());
            mp.insert(tmp);
            ans++;
        }
    }
    cout << ans << endl;
}
