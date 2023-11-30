/*日付が間違っています*/
#include <bits/stdc++.h>
using namespace std;

int elements[100001];

int main(void)
{
    int N;
    cin >> N;

    long long ans = 0;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        ans += tmp;
        elements[tmp]++;
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int B, C;
        cin >> B >> C;
        ans += (C - B) * elements[B];
        elements[C] += elements[B];
        elements[B] = 0;
        cout << ans << endl;
    }
}
