#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, H, K;
    string S;

    cin >> N >> M >> H >> K;
    cin >> S;

    set<pair<int, int>> st;
    for (int i = 0; i < M; ++i)
    {
        int x, y;
        cin >> x >> y;
        st.insert({x, y});
    }

    int crntx = 0, crnty = 0;

    for (int i = 0; i < N; ++i)
    {
        if (S[i] == 'R')
        {
            crntx++;
        }
        else if (S[i] == 'L')
        {
            crntx--;
        }
        else if (S[i] == 'U')
        {
            crnty++;
        }
        else if (S[i] == 'D')
        {
            crnty--;
        }
        H--;
        if (H < K && st.find({crntx, crnty}) != st.end())
        {
            H = K;
            st.erase({crntx, crnty});
        }
        if (i < N - 1 && H <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
