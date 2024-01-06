#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int M, D;

    cin >> M >> D;

    int y, m, d;
    cin >> y >> m >> d;

    int nexty = y, nextm = m, nextd = d;

    if (d == D)
    {
        nextd = 1;
        nextm++;
        if (nextm > M)
        {
            nextm = 1;
            nexty++;
        }
    }
    else
    {
        nextd++;
    }

    cout << nexty << " " << nextm << " " << nextd << endl;
}
