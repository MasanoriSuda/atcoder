#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000001

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> P;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        P.push_back(tmp);
    }
    priority_queue<int, vector<int>, greater<int>> que;

    for (int i = 0; i < K; ++i)
        que.push(P[i]);

    cout << que.top() << endl;

    for (int i = K; i < N; ++i)
    {
        if (que.top() < P[i])
        {
            que.pop();
            que.push(P[i]);
        }
        cout << que.top() << endl;
    }
}
