#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<unsigned long long> snipet;

    for (int i = 0; i <= 12; ++i)
    {
        unsigned long long sum = 0;
        for (int j = 0; j <= i; j++)
        {
            // cout << j << endl;
            sum += pow(10, j);
        }
        snipet.push_back(sum);
    }

    for (int i = 0; i < snipet.size(); ++i)
    {
        // cout << snipet[i] << endl;
    }

    int counter = 0;
    for (int i = 1; i < 100; ++i)
    { // 1の位
        for (int j = 1; j <= i; ++j)
        { // 10の位
            for (int k = 1; k <= i; ++k)
            { // 100の位
                if (i >= j && j >= k)
                {
                    counter++;
                    // cout << i << "," << j << "," << k << endl;
                    if (counter == N)
                    {
                        cout << snipet[i - 1] + snipet[j - 1] + snipet[k - 1] << endl;
                        return 0;
                    }
                }
            }
        }
    }
}
