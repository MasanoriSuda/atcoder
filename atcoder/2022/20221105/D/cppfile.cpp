#include <bits/stdc++.h>
using namespace std;

int getnum(int i, int div)
{
    int num = i;
    int tmp = 0;
    while (num % div == 0)
    {
        num /= div;
        tmp++;
    }
    return tmp;
}

int main(void)
{
    int N;
    cin >> N;
    set<int> v_sosuu;
    vector<int> v_div2;
    vector<int> v_div3;

    int num_div2 = 200000000;
    int num_div3 = 200000000;

    for (int i = 0; i < N; ++i)
    {
        int A;
        cin >> A;
        int tmp_num_div2;
        int tmp_num_div3;
        int tmp_sosuu;
        tmp_num_div2 = getnum(A, 2);
        // cout << tmp_num_div2 << endl;
        v_div2.push_back(tmp_num_div2);
        tmp_num_div3 = getnum(A, 3);
        v_div3.push_back(tmp_num_div3);
        if (tmp_num_div2 < num_div2)
        {
            num_div2 = tmp_num_div2;
        }
        if (tmp_num_div3 < num_div3)
        {
            num_div3 = tmp_num_div3;
        }
        tmp_sosuu = A / (pow(2, tmp_num_div2) * pow(3, tmp_num_div3));
        // cout << (pow(2, tmp_num_div2) * pow(3, tmp_num_div3)) << endl;
        v_sosuu.insert(tmp_sosuu);
    }
    if (v_sosuu.size() != 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        int ans = 0;
        for (auto a : v_div2)
        {
            ans += a - num_div2;
        }
        for (auto a : v_div3)
        {
            ans += a - num_div3;
        }
        cout << ans << endl;
    }
}
