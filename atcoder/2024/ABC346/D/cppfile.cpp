#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    string S;
    // string S_dbg;
    cin >> S;
    vector<int> C;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        C.push_back(tmp);
    }

    unsigned long long ans = 1ll << 62;
    /*i,i+1が00または11とする*/
    for (int i = 0; i < S.size() - 1; ++i)
    {
        // S_dbg.clear();
        /*00のケース*/
        unsigned long long tmpcost = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if ((i - j) % 2 == 0)
            {
                if (S.at(j) != '0')
                {
                    tmpcost += C[j];
                    // S_dbg = "0" + S_dbg;
                }
                else
                {
                    // S_dbg = "0" + S_dbg;
                }
            }
            else
            {
                if (S.at(j) != '1')
                {
                    tmpcost += C[j];
                    // S_dbg = "1" + S_dbg;
                }
                else
                {
                    // S_dbg = "1" + S_dbg;
                }
            }
        }
        // S_dbg += "00";
        if (S.at(i) != '0')
        {
            tmpcost += C[i];
        }
        if (S.at(i + 1) != '0')
        {
            tmpcost += C[i + 1];
        }

        for (int j = i + 2; j < S.size(); j++)
        {
            if ((j - i) % 2 == 0)
            {
                if (S.at(j) != '1')
                {
                    tmpcost += C[j];
                    // S_dbg = S_dbg + "1";
                }
                else
                {
                    // S_dbg = S_dbg + "1";
                }
            }
            else
            {
                if (S.at(j) != '0')
                {
                    tmpcost += C[j];
                    // S_dbg = S_dbg + "0";
                }
                else
                {
                    // S_dbg = S_dbg + "0";
                }
            }
        }
        ans = min(ans, tmpcost);
        // cout << S_dbg << endl;
        // cout << tmpcost << endl;

        // S_dbg.clear();
        /*11のケース*/
        tmpcost = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if ((i - j) % 2 == 0)
            {
                if (S.at(j) != '1')
                {
                    // cout << "hoge" << endl;
                    tmpcost += C[j];
                    // S_dbg = "1" + S_dbg;
                }
                else
                {
                    // cout << "hoge" << endl;
                    // S_dbg = "1" + S_dbg;
                }
            }
            else
            {
                if (S.at(j) != '0')
                {
                    tmpcost += C[j];
                    // S_dbg = "0" + S_dbg;
                }
                else
                {
                    // S_dbg = "0" + S_dbg;
                }
            }
        }
        // S_dbg += "11";
        if (S.at(i) != '1')
        {
            tmpcost += C[i];
        }
        if (S.at(i + 1) != '1')
        {
            tmpcost += C[i + 1];
        }
        for (int j = i + 2; j < S.size(); j++)
        {
            if ((j - i) % 2 == 0)
            {
                if (S.at(j) != '0')
                {
                    tmpcost += C[j];
                    // S_dbg = S_dbg + "0";
                }
                else
                {
                    // S_dbg = S_dbg + "0";
                }
            }
            else
            {
                if (S.at(j) != '1')
                {
                    tmpcost += C[j];
                    // S_dbg = S_dbg + "1";
                }
                else
                {
                    // S_dbg = S_dbg + "1";
                }
            }
        }
        // cout << S_dbg << endl;

        // cout << tmpcost << endl;

        ans = min(ans, tmpcost);
    }
    cout << ans << endl;
}
