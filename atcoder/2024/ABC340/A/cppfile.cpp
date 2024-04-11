#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A, B, D;
    cin >> A >> B >> D;

    int ans = A;
    bool hoge = false;
    while (ans <= B)
    {
        if (hoge)
        {
            cout << " ";
        }
        hoge = true;
        cout << ans;
        ans += D;
    }

    cout << endl;
}
