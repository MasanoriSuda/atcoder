#include <bits/stdc++.h>
using namespace std;

set<long long> st;
int main(void)
{
    long long N, K;
    cin >> N >> K;

    unsigned long long ans = 0;
    for (long long i = 0; i <= K; ++i)
    {
        ans += i;
    }

    for (long long i = 0; i < N; ++i)
    {
        long long tmp;
        cin >> tmp;
        st.insert(tmp);
    }

    for (auto itr = st.begin(); itr != st.end(); ++itr)
    {
        if (*itr <= K)
            ans -= *itr;
    }
    cout << ans << endl;
}
