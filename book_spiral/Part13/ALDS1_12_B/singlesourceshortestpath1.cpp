#include <iostream>
using namespace std;

int A[100][100];
static const int INFINITY = 1 << 21;
#define NOT_VISITED 0
#define NOW_VISITING 1
#define ALREADY_VISITED 2

int N;
int visitstate[100];
int parent[100];
int min_distance[100];

void dijkstra(void)
{
    min_distance[0] = 0;

    while (true)
    {
        int crnt_minimum_weight_vector = -1; // 最小の重みを持つ頂点
        int crnt_minimum_weight = INFINITY;
        for (int i = 0; i < N; i++)
        {
            // Vの中での最小重みのものを選択する
            if (visitstate[i] != ALREADY_VISITED && min_distance[i] < INFINITY)
            {
                if (min_distance[i] < crnt_minimum_weight)
                {
                    crnt_minimum_weight_vector = i;
                    crnt_minimum_weight = min_distance[i];
                }
            }
        }

        if (crnt_minimum_weight_vector == -1)
        {
            break;
        }

        visitstate[crnt_minimum_weight_vector] = ALREADY_VISITED;

        //
        for (int i = 0; i < N; i++)
        {
            if (visitstate[i] != ALREADY_VISITED && A[crnt_minimum_weight_vector][i] != INFINITY)
            {
                if (min_distance[crnt_minimum_weight_vector] + A[crnt_minimum_weight_vector][i] < min_distance[i])
                {
                    min_distance[i] = min_distance[crnt_minimum_weight_vector] + A[crnt_minimum_weight_vector][i];
                }
                visitstate[i] = NOW_VISITING;
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
        for (int j = 0; j < N; j++)
        {
            A[i][j] = INFINITY;
        }
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
            A[crnt_vertex][next_vertex] = between_vertex_weight;
        }
    }
    dijkstra();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // cout << A[i][j] << ",";
        }
        // cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << i << " " << min_distance[i] << endl;
    }
}
