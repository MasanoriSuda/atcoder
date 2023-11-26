#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, S;
    int A;
    set<int> st;
    cin >> N >> S;

    for (int i = 0; i < N; i++)
    {
        cin >> A;
        st.insert(A);
    }

    for (auto a : st)
    {
        if (st.find(a + S) != st.end())
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
