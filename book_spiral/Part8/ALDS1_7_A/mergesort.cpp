#include <iostream>
using namespace std;

static const int MAX = 500000;
static const int INFINITY = 1 << 30;
int cnt = 0;

struct Node
{
    int, p, l, r;
};
Node T[MAX];
int N, D[MAX];
int main(void)
{
    int N;
    int A[MAX];

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A[i] = tmp;
        // cout << A[i] << " ";
    }

    mergesort(A, 0, N);

    // cout << N << endl;

    for (int i = 0; i < N; ++i)
    {
        if (i)
        {
            cout << " ";
        }
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
}
