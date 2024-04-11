#include <bits/stdc++.h>
using namespace std;

int num[26];
int main(void)
{
    string S;
    cin >> S;

    string hoge = "abcdefghijklmnopqrstuvwxyz";
    int max = 0;
    for (int i = 0; i < S.size(); ++i)
    {
        num[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (num[max] < num[i])
        {
            max = i;
        }
    }
    cout << hoge[max] << endl;
}
