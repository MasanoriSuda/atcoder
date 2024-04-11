#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    for (int i = 0; i < N - 1; ++i)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << A.at(i) * A.at(i + 1);
    }
    cout << endl;
}
