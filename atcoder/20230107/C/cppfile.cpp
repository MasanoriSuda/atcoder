#include <bits/stdc++.h>
using namespace std;

bool graph[100][100];
int isvisited[100];

#define WHITE 0
#define GRAY 1
#define BLACK 2
int N, M;
void dfs(int firstvector)
{
    stack<int> stk;
    stk.push(firstvector);
    isvisited[firstvector] = GRAY;

    while (!stk.empty())
    {
        int nowvec = stk.top();
        // cout << nowvec << endl;
        stk.pop();
        isvisited[nowvec] = BLACK;
        for (int i = 0; i < N; i++)
        {
            if (graph[nowvec][i] == true && isvisited[i] == WHITE)
            {
                stk.push(i);
                isvisited[i] = GRAY;
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1 - 1][v2 - 1] = true;
        graph[v2 - 1][v1 - 1] = true;
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (isvisited[i] == WHITE)
        {
            dfs(i);
            sum++;
        }
    }

    cout << sum << endl;
}
