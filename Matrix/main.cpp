#include <iostream>

using namespace std;

int main()
{
    int A[3][3], B[3][3], OR[3][3], AND[3][3], XOR[3][3];

    cout << "Enter element of Matrix A (3x3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter element of Matrix B (3x3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            OR[i][j] = A[i][j] | B[i][j];
            AND[i][j] = A[i][j] & B[i][j];
            XOR[i][j] = A[i][j] ^ B[i][j];
        }
    }
    cout << "A OR B: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << OR[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "A AND B: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << AND[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "A XOR B: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << XOR[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}