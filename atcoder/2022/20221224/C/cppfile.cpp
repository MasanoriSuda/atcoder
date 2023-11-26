#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    int num = 0;
    int count = 0;
    while (num < S.size())
    {
        if (num < S.size() - 1)
        {
            if (S[num] == '0' && S[num + 1] == '0')
            {
                num += 2;
                count++;
            }
            else
            {
                num++;
                count++;
            }
        }
        else
        {
            num++;
            count++;
        }
    }
    cout << count << endl;
}
