#include <iostream>
using namespace std;

int A[100][100];

int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int row;
        cin >> row;
        int num_of_adjacent;
        cin >> num_of_adjacent;
        for (int j = 0; j < num_of_adjacent; j++)
        {
            int element_ajacent;
            cin >> element_ajacent;
            A[row - 1][element_ajacent - 1] = 1;
        }
    }

    for (int row = 0; row < N; row++)
    {
        for (int colomn = 0; colomn < N; colomn++)
        {
            if (colomn > 0)
                cout << " ";
            cout << A[row][colomn];
        }
        cout << endl;
    }
}
