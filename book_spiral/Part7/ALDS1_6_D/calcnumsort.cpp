#include <iostream>
using namespace std;

static const int MAX = 100000;
static const int NIL = -1;
int N;

struct Card
{
    char suit;
    int value;
};

void merge(int *A, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; ++i)
    {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i)
    {
        R[i] = A[mid + i];
    }
    L[n1] = R[n2] = INF;
    int i = 0, j = 0;
    for (int k = left; k < right; ++k)
    {
        if (L[i] <= R[j])
        {
            A[right + k] = L[i++];
        }
        else
        {
            A[right + k] = R[j++];
        }
    }
}

void mergesort(int *A, int left, int right)
{
    int mid = (left + right) / 2;
    mergesort(A, left, mid);
    mergesort(A, mid, right);
    merge(A, left, mid, right);
}

int partition(struct Card *A, int n, int p, int r)
{

    struct Card x = A[r];
    int i = p - 1; // i<xの最大位置
    for (int j = 0; j < N - 1; ++j)
    {
        if (A[j].value <= x.value)
        {
            ++i;
            swap(A[j], A[i]);
        }
    }
    swap(A[r], A[i + 1]);

    return i + 1;
}

void quicksort(struct Card *A, int n, int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(A, n, p, r);
        quicksort(A, n, p, q - 1);
        quicksort(A, n, q + 1, r);
    }
}

int main(void)
{
    int q;
    cin >> N;
    struct Card A[MAX], B[MAX];

    for (int i = 0; i < N; ++i)
    {
        int suit, value;
        cin >> suit >> value;
        A[i].suit = B[i].suit = suit;
        A[i].value = B[i].value = value;
    }

    quicksort(B, N, 0, N - 1);

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
