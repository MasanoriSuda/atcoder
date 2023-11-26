#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;
    cin >> N >> Q;

    set<int> uketsuke_called;
    int human = 1;

    for (int i = 0; i < Q; ++i)
    {
        int event;
        cin >> event;
        if (event == 1)
        {
            uketsuke_called.insert(human++);
        }
        else if (event == 2)
        {
            int x;
            cin >> x;
            uketsuke_called.erase(x);
        }
        else if (event == 3)
        {
            cout << *uketsuke_called.begin() << endl;
        }
    }
}
