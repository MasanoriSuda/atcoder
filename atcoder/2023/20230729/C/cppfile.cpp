#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> kaite;
    vector<int> urite;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        kaite.emplace_back(tmp);
    }
    sort(kaite.begin(), kaite.end());

    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        urite.emplace_back(tmp);
    }
    sort(urite.begin(), urite.end());
}
