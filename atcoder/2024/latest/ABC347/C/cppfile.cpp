#include <bits/stdc++.h>
using namespace std;

long long yotei[200001];
int main(void)
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> D;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        D.push_back(tmp);
    }

    int startgrnd;

    for (int i = 1; i <= N; ++i)
    {
        if (i == 1)
        {
            startgrnd = D.at(i - 1);
        }
        else
        {
            yotei[i] = D.at(i - 1) - startgrnd;
        }
    }

    /*
    for (int i = 1; i <= N; ++i)
    {
        // cout << yotei[i] << endl;
    }
    */

    bool isheijitsu = true;

    for (int i = 2; i <= N; ++i)
    {
        long long holiday = yotei[i] % (A + B);
        cout << holiday << endl;
        if (A <= holiday)
        {
            cout << yotei[i] << "," << holiday << endl;
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
