#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for (int i = 9; i >= 0; i--)
    {
        if ((N >> i) % 2 == 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    cout << endl;
}
