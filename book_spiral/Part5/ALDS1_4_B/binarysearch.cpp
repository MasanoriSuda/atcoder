#include <iostream>
using namespace std;

int binarysearch(int key, int n, int *A)
{
    int left = 0;
    int right = n;
    int mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (key == A[mid])
            return 1;
        else if (key < A[mid])
            right = mid;
        else
            left = mid + 1;
    }
    return 0;
}

int main(void)
{
    int A[1000000], n;
    int B, C;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cin >> B;
    for (int i = 0; i < B; i++)
    {
        cin >> C;
        sum += binarysearch(C, n, A);
    }

    cout << sum << endl;
}
