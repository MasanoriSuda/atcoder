#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(void)
{
    int N, M;
    cin >> N >> M;
    int Si, Sj;
    cin >> Si >> Sj;

    string A[N];
    string T[M];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> T[i];
    }

    vector<bool> isusedstr(M, false);
    // 文字列を合成する
    string combinedstr;
    for (int i = 0; i < M; ++i)
    {
        if (A[Si][Sj] == T[i][0])
        {
            combinedstr = T[i];
            isusedstr[i] = true;
            break;
        }
    }

    while (true)
    {
        string tmp = combinedstr;
        for (int i = 0; i < M; ++i)
        {
            if (combinedstr.at(combinedstr.size() - 2) == T[i][0] && combinedstr.at(combinedstr.size() - 1) == T[i][1] && isusedstr[i] == false)
            {
                combinedstr.append(T[i], 2, 4);
                isusedstr[i] = true;
            }
        }
        if (tmp == combinedstr)
        {
            break;
        }
        // cout << tmp;
        //  cout << combinedstr;
    }

    while (true)
    {
        string tmp = combinedstr;
        for (int i = M - 1; i >= 0; --i)
        {
            if (combinedstr.at(combinedstr.size() - 1) == T[i][0] && isusedstr[i] == false)
            {
                combinedstr.append(T[i], 1, 4);
                isusedstr[i] = true;
            }
        }
        if (tmp == combinedstr)
        {
            break;
        }
        // cout << tmp;
        // cout << combinedstr;
    }

    for (int i = 0; i < M; ++i)
    {
        if (isusedstr[i] == false)
        {
            combinedstr += T[i];
        }
    }
    // cout << combinedstr << endl;
    // cout << combinedstr.size() << endl;

    vector<pair<int, int>> sousa;
    string makedS;

    pair<int, int> cur = {Si, Sj};

    queue<pair<int, int>> que;

    for (int j = 0; j < combinedstr.size(); ++j)
    {
        bool isvisited[N][N];
        for (int l = 0; l < N; ++l)
        {
            for (int m = 0; m < N; ++m)
            {
                isvisited[l][m] = false;
            }
        }
        char nextc = combinedstr[j];
        que.push(cur);
        isvisited[Si][Sj] = false;
        while (!que.empty())
        {
            pair<int, int> curpos = que.front();
            que.pop();
            bool isfound = false;
            for (int i = 0; i < 4; ++i)
            {
                int nextx = curpos.first + dx[i];
                int nexty = curpos.second + dy[i];
                if (nextx < 0 || nextx >= N || nexty < 0 || nexty >= N)
                {
                    continue;
                }
                if (isvisited[nextx][nexty] == true)
                {
                    continue;
                }
                if (A[nextx][nexty] == combinedstr[j])
                {
                    sousa.push_back({nextx, nexty});
                    makedS += A[nextx][nexty];
                    cur = {Si, Sj};
                    isfound = true;
                    break;
                }
                else
                {
                    que.push({nextx, nexty});
                    isvisited[nextx][nexty] = true;
                }
            }
            if (isfound == true)
            {
                break;
            }
        }
    }

    for (int i = 0; i < sousa.size(); ++i)
    {
        cout << sousa[i].first << " " << sousa[i].second << endl;
    }

    // cout << makedS << endl;
}
