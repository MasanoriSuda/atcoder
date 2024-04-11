#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> P;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        P.push_back(tmp);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i)
    {
        int A, B;
        cin >> A >> B;

        int Aretsu, Bretsu;
        for (int j = 0; j < P.size(); ++j)
        {
            if (P.at(j) == A)
            {
                Aretsu = j;
                break;
            }
        }
        for (int j = 0; j < P.size(); ++j)
        {
            if (P.at(j) == B)
            {
                Bretsu = j;
                break;
            }
        }

        if (Aretsu < Bretsu)
        {
            cout << A << endl;
        }
        else
        {
            cout << B << endl;
        }
    }
    return 0;
}
