#include <bits/stdc++.h>
using namespace std;

vector<int> G[200001];
int num[200001];
int indeg[200001];

int main(void)
{
    int N, M;
    queue<int> que;
    cin >> N >> M;
    int start = 0;

    for (int i = 0; i < N; ++i)
    {
        int X, Y;
        cin >> X >> Y;
        G[X].push_back(Y);
    }

    for (int i = 1; i <= N; ++i)
    {
        indeg[i] = G[i].size();
    }

    for (int i = 1; i <= N; ++i)
    {
        if (indeg[i] == 0)
        {
            if (start == 0)
            {
                start = i;
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    int count = 0;
    que.push(start);
    while (!que.empty())
    {
        int tmp = que.front();
        que.pop();
        num[count] = tmp;
        if (G[tmp].size() != 1)
        {
            cout << "No2" << endl;
            return 0;
        }
        que.push(G[0].at(0));
    }

    for (int i = 0; i < N; ++i)
    {
        if (i)
            cout << " ";
        cout << num[i];
    }
    cout << endl;
}
