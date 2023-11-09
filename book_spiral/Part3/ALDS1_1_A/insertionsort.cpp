using namespace std;
#include <iostream>

void trace(int *A, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if (i != N - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
}

void insertionSort(int *A, int N)
{
    int j, i;
    int v; // ソート対象

    // ソート範囲を[0~i]とする
    //[0〜i-1]はソート済み
    // ソート対象はi
    for (i = 1; i < N; i++)
    {
        v = A[i];
        j = i - 1;
        // vとA[j]を比較して、vのほうが小さい場合、ソートを続ける
        // vはA[j+1]にあると想定する
        while (j >= 0 && v < A[j])
        {
            A[j + 1] = A[j];
            j--;
        }
        // A[j+1]にあるので、パラメータを正式に代入する
        A[j + 1] = v;
        trace(A, N);
    }
}

int main(void)
{
    int N;
    int A[100];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    trace(A, N);

    insertionSort(A, N);
}
