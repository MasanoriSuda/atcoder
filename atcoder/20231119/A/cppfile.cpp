#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N;
    cin >> N;
    string S;

    cin >> S;

    unsigned long long sum = 0;

    unsigned long long contval;

    if (S[0] == '<')
    {
        contval = 0;
    }
    else
    {
        contval = 1;
    }

    for (unsigned long long i = 1; i < N - 1; i++)
    {
        if (S[i - 1] == '>' && S[i] == '>')
        {
            contval++;
        }
        else if (S[i - 1] == '>' && S[i] == '<')
        {
            // シグマを計算
            sum += (contval) * (contval + 1) / 2;
            contval = 0;
        }
        else if (S[i - 1] == '<' && S[i] == '<')
        {
            contval = 0;
        }
        else if (S[i - 1] == '<' && S[i] == '>')
        {
            contval = 1;
        }
    }

    if (contval > 0)
    {
        sum += (contval) * (contval + 1) / 2;
    }

    cout << sum << endl;
}
