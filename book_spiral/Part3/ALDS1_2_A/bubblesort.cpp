#include <iostream>
using namespace std;

int bubblesort(int *A, int N)
{
    int num_swap = 0;
    bool is_need_swap_flag = true;

    // i~N-1を範囲とする
    for (int i = 0; is_need_swap_flag; i++)
    {
        // i〜N-1の範囲をswapする
        // この範囲でswapが必要なければ、ソート済みのため処理を終了する
        is_need_swap_flag = false;
        for (int j = N - 1; j >= i + 1; j--)
        {
            if (A[j - 1] > A[j])
            {
                swap(A[j - 1], A[j]);
                num_swap++;
                is_need_swap_flag = true;
            }
        }
    }
    return num_swap;
}

int main(void)
{
    int N;
    int A[100];
    int num_swap;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    num_swap = bubblesort(A, N);

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
