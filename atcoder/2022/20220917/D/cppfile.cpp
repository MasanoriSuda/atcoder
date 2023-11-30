#include <bits/stdc++.h>
using namespace std;

int delicious[200000];
int main(void)
{
    int N;
    cin >> N;
    int v[N];

    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        v[tmp] = i;
    }

    // 各料理
    for (int i = 0; i < N; ++i)
    {
        int human, tmp;

        human = (i - 1 + N) % N;
        tmp = (human - v[i] + N) % N;
        delicious[tmp]++;

        human = (i + N) % N;
        tmp = (human - v[i] + N) % N;
        delicious[tmp]++;

        human = (i + 1 + N) % N;
        tmp = (human - v[i] + N) % N;
        delicious[tmp]++;
    }

    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        ans = max(ans, delicious[i]);
    }
    cout << ans << endl;
}
