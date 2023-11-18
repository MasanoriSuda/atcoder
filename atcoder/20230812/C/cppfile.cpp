#include <bits/stdc++.h>
using namespace std;

char shiftedchar[200001];
vector<int> position_org[2000001];
string S;

int main(void)
{
    int N, M;

    cin >> N >> M;
    cin >> S;

    for (int i = 1; i <= N; i++)
    {
        int tmp;
        cin >> tmp;
        position_org[tmp].emplace_back(i - 1);
    }

    for (int i = 1; i <= M; i++)
    {
        // cout << i << ":";
        // cout << position_org[i].size() << endl;
        for (int j = 0; j < position_org[i].size(); j++)
        {
            // cout << position_org[i][(j - 1 + position_org[i].size()) % position_org[i].size()] << endl;
            shiftedchar[position_org[i][j]] = S.at(position_org[i][(j - 1 + position_org[i].size()) % position_org[i].size()]);
        }
    }

    cout << shiftedchar << endl;
}
