#include <iostream>
using namespace std;

static const int MAX = 100000;
int N;
int A[MAX];

int partition(int p, int r)
{

    int x = A[r];
    int i = p - 1; // i<xの最大位置
    for (int j = 0; j < N - 1; ++j)
    {
        if (A[j] <= x)
        {
            ++i;
            swap(A[j], A[i]);
        }
    }
    swap(A[r], A[i + 1]);

    return i + 1;
}

int main(void)
{
    int q;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        A[i] = tmp;
        // cout << A[i] << " ";
    }

    q = partition(0, N - 1);

    for (int i = 0; i < N; ++i)
    {
        if (i)
            cout << " ";
        if (i == q)
        {
            cout << "[";
            cout << A[i];
            cout << "]";
        }
        else
        {
            cout << A[i];
        }
    }

    cout << endl;
}
