#include <bits/stdc++.h>
using namespace std;

set<int> st;
vector<int> v;
int main(void)
{
    int N;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }

    int max_even = -1;
    int sum_even = -1;
    int max_odd = -1;
    int sum_odd = -1;

    for (auto it = st.rbegin(); it != st.rend(); it++)
    {
        if (*it % 2 == 0)
        {
            if (max_even == -1)
            {
                max_even = *it;
            }
            else if (sum_even == -1)
            {
                sum_even = *it + max_even;
            }
        }
        else if (*it % 2 != 0)
        {
            if (max_odd == -1)
            {
                max_odd = *it;
            }
            else if (sum_odd == -1)
            {
                sum_odd = *it + max_odd;
            }
        }
    }

    if (sum_even == -1 && sum_odd == -1)
    {
        cout << "-1" << endl;
    }
    else if (sum_even >= sum_odd)
    {
        cout << sum_even << endl;
    }
    else
    {
        cout << sum_odd << endl;
    }
    return 0;
}
