#include <bits/stdc++.h>
using namespace std;

bool isSatisfied[500000];

int main(void)
{
    int N;
    string T;

    cin >> N >> T;
    int sum = 0;

    // パターン1:完全一致
    // パターン2:T(前半)+余計な文字+T(後半)
    // パターン3:Tから1文字欠落
    // パターン4:1文字小文字に変換されている

    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        int cmpok = 0;

        if (T.length() == S.length())
        {
            // 完全一致か置換されている
            if (T == S)
            {
                // cout << S << endl;
                isSatisfied[i] = true;
                sum++;
            }
            else
            {
                int tmp = 0;
                while (T[tmp] == S[tmp])
                {
                    cmpok++;
                    tmp++;
                }
                reverse(S.begin(), S.end());
                reverse(T.begin(), T.end());
                tmp = 0;
                while (T[tmp] == S[tmp])
                {
                    cmpok++;
                    tmp++;
                }
                if (cmpok == S.length() - 1)
                {
                    reverse(T.begin(), T.end());
                    // cout << S << endl;
                    isSatisfied[i] = true;
                    sum++;
                }
            }
        }
        else if (T.length() == S.length() + 1)
        {
            // 一文字欠落
            int tmp = 0;
            while (T[tmp] == S[tmp])
            {
                cmpok++;
                tmp++;
            }
            reverse(S.begin(), S.end());
            reverse(T.begin(), T.end());
            tmp = 0;
            while (T[tmp] == S[tmp])
            {
                cmpok++;
                tmp++;
            }
            if (cmpok == T.length() - 1)
            {
                reverse(T.begin(), T.end());
                // cout << S << endl;
                isSatisfied[i] = true;
                sum++;
            }
        }
        else if (T.length() == S.length() - 1)
        {
            // 一文字はいっている
            int tmp = 0;
            while (T[tmp] == S[tmp])
            {
                cmpok++;
                tmp++;
            }
            reverse(S.begin(), S.end());
            reverse(T.begin(), T.end());
            tmp = 0;
            while (T[tmp] == S[tmp])
            {
                cmpok++;
                tmp++;
            }
            if (cmpok == T.length())
            {
                reverse(T.begin(), T.end());
                // cout << S << endl;
                isSatisfied[i] = true;
                sum++;
            }
        }
    }

    cout << sum << endl;

    for (int i = 0; i < N; i++)
    {
        if (isSatisfied[i] == true)
        {
            cout << i + 1;
            if (i != N - 1)
            {
                cout << " ";
            }
        }
    }
    cout << endl;
}
