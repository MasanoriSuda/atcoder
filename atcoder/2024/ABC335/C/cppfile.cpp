#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> head;

    for (int i = 0; i < Q; ++i)
    {
        int num;
        cin >> num;
        if (num == 2)
        {
            int shitei;
            cin >> shitei;
            if (head.size() < shitei)
            {
                cout << shitei - head.size() << " 0" << endl;
            }
            else
            {
                // cout << head.size() - 1 - (shitei - 1) << endl;
                // cout << shitei << endl;
                cout << head[head.size() - 1 - (shitei - 1)].first << " " << head[head.size() - 1 - (shitei - 1)].second << endl;
            }
        }
        else
        {
            string S;
            cin >> S;
            if (S == "R")
            {
                if (head.size() != 0)
                {
                    head.push_back({head[head.size() - 1].first + 1, head[head.size() - 1].second});
                }
                else
                {
                    head.push_back({2, 0});
                }
            }
            else if (S == "L")
            {
                if (head.size() != 0)
                {
                    head.push_back({head[head.size() - 1].first - 1, head[head.size() - 1].second});
                }
                else
                {
                    head.push_back({0, 0});
                }
            }
            else if (S == "U")
            {
                if (head.size() != 0)
                {
                    head.push_back({head[head.size() - 1].first, head[head.size() - 1].second + 1});
                }
                else
                {
                    head.push_back({1, 1});
                }
            }
            else if (S == "D")
            {
                if (head.size() != 0)
                {
                    head.push_back({head[head.size() - 1].first, head[head.size() - 1].second - 1});
                }
                else
                {
                    head.push_back({1, -1});
                }
            }
        }
    }
}
