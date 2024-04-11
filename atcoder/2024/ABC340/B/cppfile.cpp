#include <bits/stdc++.h>
using namespace std;

#define UE 0
#define MIGI 1
#define SHITA 2
#define HIDARI 3

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(void)
{
    int Q;
    cin >> Q;
    vector<int> A;
    for (int i = 0; i < Q; ++i)
    {
        int cmd, num;
        cin >> cmd >> num;
        if (cmd == 1)
        {
            A.push_back(num);
        }
        else
        {
            cout << A[A.size() - num] << endl;
        }
    }

    return 0;
}
