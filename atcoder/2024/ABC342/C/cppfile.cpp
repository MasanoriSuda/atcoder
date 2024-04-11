#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    char alpha[26];

    for (int i = 0; i < 26; ++i)
    {
        alpha[i] = 'a' + i;
    }

    int N;
    cin >> N;

    string S;
    cin >> S;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i)
    {
        char c, d;
        cin >> c >> d;
        for (int j = 0; j < 26; ++j)
        {
            if (alpha[j] == c)
            {
                alpha[j] = d;
            }
        }
    }

    for (int i = 0; i < S.size(); ++i)
    {
        cout << alpha[S.at(i) - 'a'];
    }
    cout << endl;

    return 0;
}
