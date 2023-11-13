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

void prim(void)
{
    int mindistance;
    int min_vector;
    min_distance[0] = 0;

    while (true)
    {
        mindistance = INFINITY; // 最小距離
        min_vector = -1;        // 最小距離と紐づく頂点

        // V-Tの範囲で最短ルートでいける頂点を選択する
        for (int i = 0; i < N; i++)
        {
            if (visitstate[i] != ALREADY_VISITED && min_distance[i] < mindistance)
            {
                mindistance = min_distance[i];
                min_vector = i;
            }
        }

        // V-Tと連結する箇所が見つからなかった
        if (mindistance == INFINITY)
        {
            break;
        }

        // 最短ルートのパラメータを探索する
        visitstate[min_vector] = ALREADY_VISITED;

        int tmp_distance = INFINITY;
        for (int i = 0; i < N; i++)
        {
            if (visitstate[i] != ALREADY_VISITED && A[min_vector][i] != INFINITY)
            {
                if (A[min_vector][i] < min_distance[i])
                {
                    parent[i] = min_vector;
                    min_distance[i] = A[min_vector][i];
                }
                visitstate[i] = NOW_VISITING;
                // cout << visitstate[i] << endl;
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
        parent[i] = -1;
        min_distance[i] = INFINITY;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int tmp;
            cin >> tmp;
            A[i][j] = (tmp == -1) ? INFINITY : tmp;
            // cout << A[i][j] << ",";
        }
        // cout << endl;
    }

    prim();

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        // cout << i << ":" << min_distance[i] << endl;
        sum += min_distance[i];
    }

    cout << sum << endl;
}
