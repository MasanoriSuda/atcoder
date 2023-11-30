#include <bits/stdc++.h>
using namespace std;

int sumi[100];
int main(void)
{
    int N, M;
    vector<int> A;
    string S[100];
    int topsum = 0;
    cin >> N >> M;
    for (int i = 0; i < M; ++i)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
        // cout << tmp;
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> S[i];
        // cout << S[i] << endl;
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            // cout << S[i][j];
            if (S[i][j] == 'o')
            {
                sumi[i] += A[j];
            }
        }
        if (sumi[i] != 0)
        {
            sumi[i] += i + 1;
        }
        // cout << endl;
        if (topsum < sumi[i])
        {
            topsum = sumi[i];
        }
        // cout << sumi[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        int remaintest = 0;
        if (sumi[i] == topsum)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int j = M - 1; j >= 0; --j)
            {
                if (S[i][j] != 'o')
                {
                    if (sumi[i] == 0)
                    {
                        sumi[i] += i + 1;
                    }
                    sumi[i] += A[j];
                    // cout << sumi[i] << endl;
                    remaintest++;
                    if (sumi[i] > topsum)
                    {
                        cout << remaintest << endl;
                        break;
                    }
                }
            }
        }
    }
}
