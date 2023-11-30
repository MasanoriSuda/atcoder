#include <bits/stdc++.h>
using namespace std;

int num[10];
int main(void)
{
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); ++i)
    {
        num[S[i] - '0']++;
    }

    if (S.size() == 1)
    {
        if (S == "8")
        {
            cout << "Yes" << endl;
            return 0;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    else if (S.size() == 2)
    {
        string rev_s;
        rev_s = S;
        swap(S[0], S[1]);
        if (stoi(S) % 8 == 0 || stoi(rev_s) % 8 == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 1000; i = i + 8)
    {
        // cout << i << endl;
        vector<int> ketanum(10, 0);

        int keta_100 = (i / 100);
        int keta_10 = (i % 100) / 10;
        int keta_1 = (i % 10);

        ketanum[keta_100]++;
        ketanum[keta_10]++;
        ketanum[keta_1]++;

        bool issatisfied = true;
        for (int j = 0; j < 10; ++j)
        {
            if (i == 8)
            {
                // cout << num[j] << ketanum[j] << endl;
            }
            if (num[j] < ketanum[j])
            {
                issatisfied = false;
            }
        }
        if (issatisfied)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
