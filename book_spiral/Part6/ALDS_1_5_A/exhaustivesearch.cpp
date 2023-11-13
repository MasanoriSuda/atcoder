#include <iostream>
using namespace std;

int A[2000];
int num_element;

bool solve(int index, int sum)
{
    bool okval;
    if (sum == 0)
    {
        return true;
    }
    else if (sum < 0 || index >= num_element)
    {
        return false;
    }
    else
    {
        okval = solve(index + 1, sum) || solve(index + 1, sum - A[index]);
    }
    return okval;
}

int main(void)
{
    int sum = 0;
    cin >> num_element;
    for (int i = 0; i < num_element; ++i)
    {
        cin >> A[i];
    }

    int validation_num, judge_num;
    cin >> validation_num;
    for (int i = 0; i < validation_num; i++)
    {
        cin >> judge_num;
        if (solve(0, judge_num))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
