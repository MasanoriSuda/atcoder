#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long N;
    cin >> N;

    unsigned long long count = 1;
    unsigned long long count_cur = 1;
    unsigned long long count_3 = 1;

    while (count_3 <= N)
    {
        string s = to_string(count_3);
        string s_rev = s;
        reverse(s_rev.begin(), s_rev.end());
        if (s == s_rev)
        {
            count_cur = count_3;
        }
        count++;
        count_3 = count * count * count;
    }
    cout << count_cur << endl;
    return 0;
}
