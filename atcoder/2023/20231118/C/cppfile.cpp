#include <bits/stdc++.h>
using namespace std;

int ma[26];

int main(void)
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    string tmp;
    int crnt_size = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            crnt_size = 1;
            ma[S[0] - 'a'] = 1;
        }
        else
        {
            if (S[i - 1] == S[i])
            {
                crnt_size++;
                ma[S[i] - 'a'] = max(ma[S[i] - 'a'], crnt_size);
                //                cout << ma[S[i] - 'a'] << S[i] << endl;
            }
            else
            {
                crnt_size = 1;
                ma[S[i] - 'a'] = max(ma[S[i] - 'a'], 1);
                //                cout << ma[S[i] - 'a'] << S[i] << endl;
            }
        }
        // cout << ma['s' - 'a'] << endl;
    }
    int size = 0;
    for (int i = 0; i < 26; i++)
    {
        size += ma[i];
        // cout << ma[i];
    }
    cout << size << endl;
}
