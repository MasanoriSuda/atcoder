#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000001

int main(void)
{
    int N, Q;
    string S;
    cin >> N >> Q >> S;
    int index = 0;
    for (int i = 0; i < Q; ++i)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
        {
            index = (index - x + S.size()) % S.size();
            // cout << index << endl;
        }
        else
        {
            cout << S[(index + x - 1) % S.size()] << endl;
        }
    }
}
