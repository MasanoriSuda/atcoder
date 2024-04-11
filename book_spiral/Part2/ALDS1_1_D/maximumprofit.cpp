using namespace std;
#include <iostream>

int main(void)
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    int ans = (1 << 30) * -1;
    int minv = A[0];
    for (int i = 1; i < N; ++i)
    {
        ans = max(ans, A[i] - minv);
        minv = min(minv, A[i]);
    }
    cout << ans << endl;
}
