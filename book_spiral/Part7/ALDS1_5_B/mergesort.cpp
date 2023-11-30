#include <iostream>
using namespace std;

static const int MAX = 500000;
static const int INFINITY = 1 << 30;
int cnt = 0;

void merge(int *A, int left, int mid, int right)
{
    int len_left = mid - left;
    int len_right = right - mid;
    int L[len_left + 1], R[len_right + 1];

    for (int i = 0; i < len_left; ++i)
    {
        L[i] = A[left + i];
    }
    L[len_left] = INFINITY;

    for (int i = 0; i < len_right; ++i)
    {
        R[i] = A[mid + i];
    }
    R[len_right] = INFINITY;

    int i = 0, j = 0;
    for (int k = left; k < right; ++k)
    {
        cnt++;
        if (L[i] < R[j])
        {
            A[k] = L[i++];
        }
        else
        {
            A[k] = R[j++];
        }
    }
}

void mergesort(int *A, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        mergesort(A, left, mid);
        mergesort(A, mid, right);
        merge(A, left, mid, right);
    }
}

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
