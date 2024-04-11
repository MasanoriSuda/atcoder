#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> A;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    bool hoge = false;
    for (int i = 0; i < N; ++i)
    {
        if (A.at(i) % K == 0)
        {
            if (hoge == true)
            {
                cout << " ";
            }
            cout << A.at(i) / K;
            hoge = true;
        }
    }
    cout << endl;
}
