#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int bett[26];

int main(void)
{
    int A, B;
    cin >> A >> B;
    for (int i = 0; i <= 9; ++i)
    {
        if (i != A + B)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
