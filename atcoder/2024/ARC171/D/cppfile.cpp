#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    vector<int> A;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    cout << N / 2 << endl;
    for (int i = 1; i <= N / 2; ++i)
    {
        // cout << "d" << N / 2 - i << endl;
        // cout << "u" << N / 2 + i << endl;
    }
}
