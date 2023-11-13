#include <iostream>
#include <stack>
using namespace std;

int n, A[100][100];
int visitstate[100];
int d[100], f[100];
int timestamp;

#define NOT_VISIT 0
#define NOW_VISITING 1
#define ALREADY_VISITED 2

int next(int visiting_vector)
{
    for (int vector = 0; vector < n; vector++)
    {
        if (A[visiting_vector][vector] == 1 && visitstate[vector] == NOT_VISIT)
        {
            return vector;
        }
    }
    return -1;
}

void dfs_visit(int vector)
{
    stack<int> S;
    S.push(vector);
    visitstate[vector] = NOW_VISITING;
    ++timestamp;
    d[vector] = timestamp;

    while (!S.empty())
    {
        int visiting_vector = S.top();
        int nextvec = next(visiting_vector);
        if (nextvec == -1)
        {
            S.pop();
            visitstate[visiting_vector] = ALREADY_VISITED;
            ++timestamp;
            f[visiting_vector] = timestamp;
        }
        else
        {
            S.push(nextvec);
            visitstate[nextvec] = NOW_VISITING;
            ++timestamp;
            d[nextvec] = timestamp;
        }
    }
}

void dfs()
{
    int u;
    timestamp = 0;
    for (u = 0; u < n; u++)
    {
        visitstate[u] = NOT_VISIT;
    }

    for (u = 0; u < n; u++)
    {
        if (visitstate[u] == NOT_VISIT)
        {
            dfs_visit(u);
        }
    }
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int row;
        cin >> row;
        int num;
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            int colomun;
            cin >> colomun;
            A[row - 1][colomun - 1] = 1;
        }
    }
    /*
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << A[i][j];
            }
            cout << endl;
        }
    */
    dfs();

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
}
