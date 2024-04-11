#include <bits/stdc++.h>
using namespace std;

bool hoge[300001];

int main(void)
{
    int N;
    cin >> N;
    int crnt; // カレントインデックス
    int first;
    vector<int> A;
    vector<int> ans;
    A.push_back(0);

    for (int i = 1; i <= N; ++i)
    {
        int tmp;
        cin >> tmp;
        if (tmp == -1)
        {
            first = i;
            A.push_back(tmp);
        }
        else
        {
            A.push_back(tmp);
            hoge[tmp] = true;
        }
    }

    for (int i = 1; i <= N; ++i)
    {
        if (hoge[i] == false)
        {
            crnt = i;
            ans.push_back(i);
        }
    }

    for (int i = 0; i < N - 1; ++i)
    {
        ans.push_back(A[crnt]);
        crnt = A[crnt];
    }
    // ans.push_back(first);
    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }

    cout << endl;
}
