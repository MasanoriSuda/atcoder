#include <bits/stdc++.h>
using namespace std;

int character[26];
int main(void)
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); ++i)
    {
        character[S.at(i) - 'a']++;
    }

    int hoge = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (character[i] != 0)
        {
            hoge++;
        }
    }

    unsigned long long ans = 0;
    // 違う文字の入れ替え
    for (int i = 0; i < 25; ++i)
    {
        for (int j = i + 1; j < 26; ++j)
        {
            if (character[i] != 0 && character[j] != 0)
            {
                // cout << i << character[i] << "," << j << character[j] << endl;
                ans += character[i] * character[j];
            }
        }
    }

    // 同一文字の入れ替えは自分自身、1通りしかない
    for (int i = 0; i < 26; ++i)
    {
        if (character[i] > 1)
        {
            ans++;
            break;
        }
    }

    cout << ans << endl;
}
