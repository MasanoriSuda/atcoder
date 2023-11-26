#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    unsigned long long sum = 0;
    for (int i = 0; i < S.size(); ++i)
    {
        sum = sum * 26 + S.at(i) - 'A' + 1;
    }

    cout << sum << endl;
}
