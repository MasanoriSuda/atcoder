#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int N, M;
    string S;
    cin >> N >> M;
    cin >> S;

    int hoji_shirts_muji = M;
    int hoji_shirts_moji = 0;
    int usable_shirts_muji = M;
    int usable_shirts_moji = 0;

    for (int i = 0; i < S.size(); ++i)
    {
        if (S[i] == '1')
        {
            if (usable_shirts_muji > 0)
            {
                usable_shirts_muji--;
            }
            else if (usable_shirts_moji > 0)
            {
                usable_shirts_moji--;
            }
            else
            {
                hoji_shirts_moji++;
            }
        }
        else if (S[i] == '2')
        {
            if (usable_shirts_moji > 0)
            {
                usable_shirts_moji--;
            }
            else
            {
                hoji_shirts_moji++;
            }
        }
        else
        {
            usable_shirts_moji = hoji_shirts_moji;
            usable_shirts_muji = hoji_shirts_muji;
        }
    }
    cout << hoji_shirts_moji + hoji_shirts_muji - M << endl;
}
