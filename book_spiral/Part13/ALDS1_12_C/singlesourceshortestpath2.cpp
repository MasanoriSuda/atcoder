#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

static const int INFINITY = 1 << 21;
#define NOT_VISITED 0
#define NOW_VISITING 1
#define ALREADY_VISITED 2

int N;
int visitstate[10000];
int parent[10000];
int min_distance[10000];

vector<pair<int, int>> g_nextvecex_pair[10000];

void dijkstra(void)
{
    priority_queue<pair<int, int>> PQ;

    // 0始点
    min_distance[0] = 0;
    PQ.push(make_pair(0, 0));
    visitstate[0] = NOW_VISITING;

    while (!PQ.empty())
    {
        pair<int, int> tmp = PQ.top();
        PQ.pop();
        int tmp_vector = tmp.second;
        int tmp_vector_weight = tmp.first * (-1);
        visitstate[tmp_vector] = ALREADY_VISITED;

        if (min_distance[tmp_vector] < tmp_vector_weight)
        {
            continue;
        }

        for (int i = 0; i < g_nextvecex_pair[tmp_vector].size(); i++)
        {
            // cout << tmp_vector << i;
            int v = g_nextvecex_pair[tmp_vector][i].first;
            if (visitstate[v] == ALREADY_VISITED)
                continue;
            if (min_distance[v] > min_distance[tmp_vector] + g_nextvecex_pair[tmp_vector][i].second)
            {
                min_distance[v] = min_distance[tmp_vector] + g_nextvecex_pair[tmp_vector][i].second;
                PQ.push(make_pair(min_distance[i] * (-1), v));
                visitstate[v] = NOW_VISITING;
            }
        }
    }
}

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        visitstate[i] = NOT_VISITED;
        min_distance[i] = INFINITY;
        parent[i] = -1;
    }

    for (int i = 0; i < N; i++)
    {
        int crnt_vertex;
        int vertex_num;
        int next_vertex;
        int between_vertex_weight;
        cin >> crnt_vertex >> vertex_num;
        for (int j = 0; j < vertex_num; j++)
        {
            cin >> next_vertex >> between_vertex_weight;
            g_nextvecex_pair[j].emplace_back(next_vertex, between_vertex_weight);
        }
    }
    dijkstra();

    for (int i = 0; i < N; i++)
    {
        cout << i << " " << min_distance[i] << endl;
    }
}
