#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> str;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        str.push_back(S);
    }

    sort(str.begin(), str.end());

    do
    {
        bool isok = true;
        for (int i = 0; i < N - 1; i++)
        {
            int eqval = 0;
            for (int len = 0; len < M; len++)
            {
                if (str[i].at(len) != str[i + 1].at(len))
                {
                    eqval++;
                }
            }
            if (eqval > 1)
            {
                isok = false;
                break;
            }
        }

        if (isok == true)
        {
            cout << "Yes" << endl;
            return 0;
        }

    } while (next_permutation(str.begin(), str.end()));
    cout << "No" << endl;
}
