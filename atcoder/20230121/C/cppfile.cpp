#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    unsigned long long A, B;

    cin >> N >> A >> B;

    string S;
    cin >> S;

    int left;
    int right;

    unsigned long long sum = 11l << 60;

    // 何回右回り？
    for (int i = 0; i < N; ++i)
    {
        unsigned long long tmp = i * A;
        for (int j = 0; j < N / 2; j++)
        {
            left = (i + j) % N;
            right = (i + N - 1 - j) % N;
            if (S[left] != S[right])
                tmp += B;
        }
        sum = min(sum, tmp);
    }

    cout << sum << endl;
}
