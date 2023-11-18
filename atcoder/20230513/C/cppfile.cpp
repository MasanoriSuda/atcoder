#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S[2];

    cin >> S[0] >> S[1];

    int a_to_z_alpha[2][27];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            a_to_z_alpha[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < S[0].length(); j++)
        {
            if (S[i][j] == '@')
            {
                a_to_z_alpha[i][26]++;
            }
            else
            {
                a_to_z_alpha[i][S[i][j] - 'a']++;
            }
        }
    }

    int abs_sum = 0;
    bool ismatch = true;
    for (int i = 0; i < 26; i++)
    {
        if (i == 'a' - 'a' || i == 't' - 'a' || i == 'c' - 'a' || i == 'o' - 'a' || i == 'd' - 'a' || i == 'e' - 'a' || i == 'r' - 'a')
            abs_sum += abs(a_to_z_alpha[1][i] - a_to_z_alpha[0][i]);
        else
        {
            if (abs(a_to_z_alpha[1][i] - a_to_z_alpha[0][i]) != 0)
            {
                ismatch = false;
                break;
            }
        }
    }

    // cout << abs_sum << endl;

    string chokudai = "atcoder";
    if (ismatch == true)
    {
        for (int i = 0; i < chokudai.size(); i++)
        {
            int diff_1_0 = a_to_z_alpha[1][chokudai.at(i) - 'a'] - a_to_z_alpha[0][chokudai.at(i) - 'a'];
            if (diff_1_0 > 0)
            {
                a_to_z_alpha[0][chokudai.at(i) - 'a'] += diff_1_0;
                a_to_z_alpha[0][26] -= diff_1_0;
            }
            else if (diff_1_0 < 0)
            {
                a_to_z_alpha[1][chokudai.at(i) - 'a'] += diff_1_0;
                a_to_z_alpha[1][26] -= diff_1_0;
            }
        }
    }

    if (a_to_z_alpha[0][26] < 0 || a_to_z_alpha[1][26] < 0)
        ismatch = false;

    if (ismatch == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
