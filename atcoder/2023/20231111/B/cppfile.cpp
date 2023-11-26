#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, D;
    int sum = 0;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        int D;
        cin >> D;
        for (int j = 1; j <= D; j++)
        {
            bool hoge = true;
            string month = to_string(i);
            string day = to_string(j);
            int len_month = month.length();
            int day_length = day.length();
            for (int k = 0; k < len_month; k++)
            {
                if (month[0] != month[k])
                {
                    // cout << month[k];
                    hoge = false;
                }
            }
            for (int k2 = 0; k2 < day_length; k2++)
            {
                if (month[0] != day[k2])
                {
                    // cout << day[k2];
                    hoge = false;
                }
            }
            if (hoge == true)
                sum++;
        }
    }

    cout << sum << endl;
}
