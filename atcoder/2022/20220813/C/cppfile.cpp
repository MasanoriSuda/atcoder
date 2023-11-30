#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000001

int main(void)
{
    string S;
    cin >> S;
    vector<int> v;
    for (int i = 0; i < 7; ++i)
    {
        if (S[i] == 'a')
            v.push_back(0);
        if (S[i] == 't')
            v.push_back(1);
        if (S[i] == 'c')
            v.push_back(2);
        if (S[i] == 'o')
            v.push_back(3);
        if (S[i] == 'd')
            v.push_back(4);
        if (S[i] == 'e')
            v.push_back(5);
        if (S[i] == 'r')
            v.push_back(6);
    }

    int tentousuu = 0;
    for (int i = 0; i < 7; ++i)
    {
        for (int j = i + 1; j < 7; ++j)
        {
            if (v[i] > v[j])
                tentousuu++;
        }
    }

    cout << tentousuu << endl;
}
