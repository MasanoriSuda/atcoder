#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N;
    cin >> N;

    vector<int> ans;
    int i = 1;
    if (N == 1)
    {
        cout << "0" << endl;
        return 0;
    }
    else
    {
        N--;
        while (N != 0)
        {
            // cout << (N % 5) * 2;
            ans.push_back((N % 5) * 2);
            N = N / 5;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto a : ans)
    {
        cout << a;
    }
    cout << endl;
}
