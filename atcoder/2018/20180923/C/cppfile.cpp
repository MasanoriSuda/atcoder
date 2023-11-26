#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> prefecture[N + 1];
    map<int, vector<int>> mp;
    string sortedresult[M];

    for (int i = 0; i < M; ++i)
    {
        int P, Y;
        cin >> P >> Y;
        prefecture[P].push_back({Y, i});
    }
    for (int i = 1; i <= N; ++i)
    {
        sort(prefecture[i].begin(), prefecture[i].end());
        int index = 1;
        for (auto it = prefecture[i].begin(); it != prefecture[i].end(); it++)
        {
            char s[13];
            sprintf(s, "%06d%06d", i, index);
            sortedresult[it->second] = s;
            index++;
        }
    }

    for (int i = 0; i < M; ++i)
    {
        cout << sortedresult[i] << endl;
    }
}
