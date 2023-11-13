#include <iostream>
using namespace std;

struct Card
{
    char suit, value;
};

void bubblesort(struct Card *C, int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = N - 1; j <= i + 1; --j)
        {
            if (C[j].value < C[j - 1].value)
            {
                Card tmp_C = C[j - 1];
                C[j - 1] = C[j];
                C[j] = tmp_C;
            }
        }
    }
}

void selectionsort(struct Card *C, int N)
{
    for (int i = 0; i < N; ++i)
    {
        int minj = i;
        for (int j = i; j < N; ++j)
        {
            if (C[j].value < C[minj].value)
            {
                minj = j;
            }
        }
        Card tmp_C = C[i];
        C[i] = C[minj];
        C[minj] = tmp_C;
    }
}

bool isStable(struct Card *C_bubble, struct Card *C_selection, int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (C_bubble[i].suit != C_selection[i].suit)
        {
            return false;
        }
    }
    return true;
}

void print(struct Card *C, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << C[i].suit << C[i].value;
    }
    cout << endl;
}

int main(void)
{
    int N;
    Card C_bubble[36], C_selection[36];

    cin >> N;
    cout << N << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> C_bubble[i].suit >> C_bubble[i].value;
        cout << C_bubble[i].suit << C_bubble[i].value << endl;
    }
    cout << "hoge2";
    for (int i = 0; i < N; ++i)
    {
        C_selection[i] = C_bubble[i];
    }
    cout << "hoge3";
    bubblesort(C_bubble, N);
    selectionsort(C_selection, N);

    print(C_bubble, N);
    cout << "Stable" << endl;
    print(C_selection, N);

    int isstat = isStable(C_bubble, C_selection, N);
    if (isstat)
    {
        cout << "Stable" << endl;
    }
    else
    {
        cout << "Not Stable" << endl;
    }
}
