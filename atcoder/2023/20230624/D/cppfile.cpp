#include <bits/stdc++.h>
using namespace std;

long long dp[300001][2];

int main(void)
{

    int N;
    string S;
    string tmp_s;
    cin >> N >> S;

    int migikakko = 0;
    for (auto c : S)
    {
        tmp_s += c;
        if (c == '(')
        {
            migikakko++;
        }
        else if (c == ')')
        {
            if (migikakko > 0)
            {
                while (tmp_s.back() != '(')
                {
                    tmp_s.pop_back();
                }
                tmp_s.pop_back();
                migikakko--;
            }
        }
        // cout << migikakko << tmp_s << ":" << c << endl;
    }
    cout << tmp_s << endl;
}
