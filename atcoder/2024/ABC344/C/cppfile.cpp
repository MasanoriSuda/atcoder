#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M, L, Q;
    vector<int> A, B, C, D;
    set<int> st;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    cin >> M;
    for (int i = 0; i < M; ++i)
    {
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }

    cin >> L;
    for (int i = 0; i < L; ++i)
    {
        int tmp;
        cin >> tmp;
        C.push_back(tmp);
    }

    for (int i = 0; i < A.size(); ++i)
    {
        for (int j = 0; j < B.size(); ++j)
        {
            for (int k = 0; k < C.size(); ++k)
            {
                // D.push_back(A.at(i) + B.at(j) + C.at(k));
                st.insert(A.at(i) + B.at(j) + C.at(k));
            }
        }
    }

    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int ans;
        cin >> ans;
        bool hoge = false;

        if (st.find(ans) != st.end())
        {
            hoge = true;
        }

        if (hoge == false)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
