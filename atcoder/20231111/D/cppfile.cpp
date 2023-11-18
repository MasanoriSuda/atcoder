#include <bits/stdc++.h>
using namespace std;

int A[300000];
int B[300000];

int main(void)
{
    string S, ans;
    cin >> S;

    for (auto c : S)
    {
        ans += c;
        if (ans.size() >= 3 && ans.substr(ans.size() - 3) == "ABC")
        {
            ans.erase(ans.end() - 3, ans.end());
        }
    }
    cout << ans << endl;
}
