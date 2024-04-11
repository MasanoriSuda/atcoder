#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int bett[26];

int main(void)
{
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); ++i)
    {
        alpha[S.at(i) - 'a']++;
        bett[S.at(i) - 'a'] = i;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (alpha[i] == 1)
        {
            cout << bett[i] + 1 << endl;
            return 0;
        }
    }
}
