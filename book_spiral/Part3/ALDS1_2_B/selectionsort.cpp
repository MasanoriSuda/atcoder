#include <iostream>
using namespace std;

int selectionsort(int *A, int N)
{
    int num_swap = 0;
    for (int i = 0; i < N - 1; i++)
    {
        int index_min = i; // i~N-1での最小インデックス
        bool is_need_swap = false;
        // インデックスの最小を探し出す
        for (int j = i; j < N; j++)
        {
            if (A[index_min] > A[j])
            {
                index_min = j;
                is_need_swap = true;
            }
        }
        if (is_need_swap)
        {
            swap(A[i], A[index_min]);
            num_swap++;
        }
    }
    return num_swap;
}

int main(void)
{
    int N, A[100];
    int num_swap;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    num_swap = selectionsort(A, N);

    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if (i < N - 1)
            cout << " ";
        else
            cout << endl;
    }
    cout << num_swap << endl;
}
