#include <iostream>
using namespace std;

char s[3];

void rec(int i)
{
    if (i == 3)
    {
        cout << s << endl;
        return;
    }

    // 1~i-1までの値は確定している

    // iの値を0とする
    s[i] = '0';
    // i+1以降の全通りのパターンを決定する
    rec(i + 1);
    // iの値を1とする
    s[i] = '1';
    // i+1以降の全通りのパターンを決定すうる
    rec(i + 1);
}

void makeCombination()
{
    for (int i = 0; i < 3; i++)
    {
        s[i] = '0';
    }
    rec(0);
}

int main()
{
    makeCombination();
}
