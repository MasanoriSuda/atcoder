#include <bits/stdc++.h>
using namespace std;

int dist[10][10];
int visitstate[10];
int weight[10];

static const int INF = 1100000000;

#define NOT_VISITED 0
#define NOW_VISITING 1
#define ALREADY_VISITED 2

int N, M;
int ans = 0;
int law_dk(int i)
{
    int sum = 0;
    if (visitstate[] != NOT_VISITED)
        return;

    stack<int> stk;
    while (true)
    {
    }
    return sum;
}

int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            dist[i][j] = INF;
        }
        visitstate[i] = NOT_VISITED;
        weight[i] = -1;
    }

    for (int i = 0; i < M; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        dist[A - 1][B - 1] = C;
        dist[B - 1][A - 1] = C;
    }
    for (int i = 0; i < N; i++)
    {
        law_dk(i);
    }
    cout << ans << endl;
}
