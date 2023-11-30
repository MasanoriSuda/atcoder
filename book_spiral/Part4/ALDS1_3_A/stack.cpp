#include <bits/stdc++.h>
using namespace std;

int Stack[100];
int top;

int push(int i)
{
    return Stack[++top] = i;
}

int pop()
{
    --top;
    return Stack[top + 1];
}

int main(void)
{
    char str[100];

    while (scanf("%s", str) != EOF)
    {
        {
            // cout << str << endl;
            if (str[0] == '+')
            {
                int op1 = pop();
                int op2 = pop();
                push(op1 + op2);
            }
            else if (str[0] == '-')
            {
                int op2 = pop();
                int op1 = pop();
                push(op1 - op2);
            }
            else if (str[0] == '*')
            {
                int op1 = pop();
                int op2 = pop();
                push(op1 * op2);
            }
            else
            {
                push(atoi(str));
            }
        }
    }
    cout << pop() << endl;
}
