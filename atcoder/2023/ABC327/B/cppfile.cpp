#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<unsigned long long> st;
    unsigned long long B;

    unsigned long long lastval = 1;
    while (true)
    {
        unsigned long long tmp = pow(lastval, lastval);
        if (tmp <= 1e15)
        {
            cout << tmp << endl;
            st.insert(tmp);
            lastval++;
        }
        else
        {
            break;
        }
    }
    if (st.find(B) != st.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
