#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> A;

    while (1)
    {
        int tmp;
        cin >> tmp;
        if (cin.eof())
        {
            break;
        }
        A.push_back(tmp);
    }

    reverse(A.begin(), A.end());

    for (int i = 0; i < A.size(); ++i)
    {
        cout << A.at(i) << endl;
    }
}
