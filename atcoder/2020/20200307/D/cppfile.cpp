#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S;
    deque<char> deq;
    int Q, T;
    cin >> S;
    cin >> Q;

    for (int i = 0; i < S.size(); ++i)
    {
        deq.push_back(S[i]);
    }

    bool isReversed = false;

    for (int i = 0; i < Q; ++i)
    {
        cin >> T;
        if (T == 1)
        {
            isReversed = (isReversed == true) ? false : true;
        }
        else
        {
            int F;
            char C;
            cin >> F >> C;
            if (isReversed == true)
            {
                if (F == 1)
                    deq.push_front(C);
                else
                    deq.push_back(C);
            }
            else
            {
                if (F == 1)
                    deq.push_back(C);
                else
                    deq.push_front(C);
            }
        }
    }
    if (isReversed)
    {
        while (!deq.empty())
        {
            cout << deq.front();
            deq.pop_front();
        }
    }
    else
    {
        while (!deq.empty())
        {
            cout << deq.back();
            deq.pop_back();
        }
    }
    cout << endl;
}
