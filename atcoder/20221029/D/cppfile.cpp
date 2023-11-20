#include <bits/stdc++.h>
using namespace std;

map<unsigned long long, unsigned long long> mp;

unsigned long long factorial(unsigned long long i)
{
    if (i == 0)
    {
        return 1;
    }
    else
    {
        unsigned long long divide_2, divide_3;
        if (mp.find(i / 2) != mp.end())
        {
            divide_2 = mp[i / 2];
        }
        else
        {
            divide_2 = factorial(i / 2);
            mp[i / 2] = divide_2;
        }

        if (mp.find(i / 3) != mp.end())
        {
            divide_3 = mp[i / 3];
        }
        else
        {
            divide_3 = factorial(i / 3);
            mp[i / 3] = divide_3;
        }
        return divide_2 + divide_3;
    }
}

int main(void)
{
    unsigned long long N;
    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}
