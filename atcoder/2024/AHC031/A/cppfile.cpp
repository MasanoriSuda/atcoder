#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int W, D, N;
    cin >> W >> D >> N;

    int startaxis = 0;
    for (int i = 0; i < D; ++i)
    {
        vector<int> A;
        for (int j = 0; j < N; ++j)
        {
            int tmp;
            cin >> tmp;
            A.push_back(tmp);
        }

        float sum = reduce(A.begin(), A.end());

        // cout << sum << endl;

        int hoge = 0;
        for (int j = 0; j < N; ++j)
        {
            hoge += ceil(A[j] * 1.0 / W);
        }

        sum = ceil(sum / W);

        // cout << sum << endl;

        for (int j = 0; j < N; ++j)
        {
            if (hoge <= W && sum <= 900)
            {
                int nextaxis;
                if (startaxis + (ceil(A[j] / W)) <= W)
                {
                    nextaxis = startaxis + ceil(A[j] / W);
                }
                else
                {
                    startaxis = 0;
                    nextaxis = ceil(A[j] / W);
                }
                cout << startaxis << " "
                     // cout << j << " "
                     << "0"
                     << " "
                     << nextaxis
                     //<< j + 1
                     << " "
                     << W
                     << endl;
                startaxis = nextaxis;
            }
            else
            {
                int width;
                if (W % N == 0)
                {
                    width = W / N;
                }
                else
                {
                    width = floor(W * 1.0 / N);
                }
                cout << j * width << " "
                     // cout << j << " "
                     << "0"
                     << " "
                     << (j + 1) * width
                     //<< j + 1
                     << " "
                     << W
                     << endl;
            }
        }
    }
}
