#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;
    cin >> N >> Q;
    set<pair<int, int>> followers;

    for (int i = 0; i < Q; i++)
    {
        int T, A, B;
        cin >> T >> A >> B;
        if (T == 1)
        {
            followers.emplace(A, B);
        }
        else if (T == 2)
        {
            followers.erase({A, B});
        }
        else if (T == 3)
        {
            if (followers.count({A, B}) && followers.count({B, A}))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
