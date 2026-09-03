#include <iostream>
using namespace std;

#define MAX 10

void readMatrix(int a[MAX][MAX], int r, int c)
{
    cout << "Enter elements of matrix:\n";

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
}

void displayMatrix(int a[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << "\t";

        cout << endl;
    }
}

void addition(int a[MAX][MAX], int b[MAX][MAX], int r, int c)
{
    int result[MAX][MAX];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = a[i][j] + b[i][j];

    cout << "\nAddition of matrices:\n";
    displayMatrix(result, r, c);
}

void subtraction(int a[MAX][MAX], int b[MAX][MAX], int r, int c)
{
    int result[MAX][MAX];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = a[i][j] - b[i][j];

    cout << "\nSubtraction of matrices:\n";
    displayMatrix(result, r, c);
}

void multiplication(int a[MAX][MAX], int b[MAX][MAX],
                    int r1, int c1, int c2)
{
    int result[MAX][MAX] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "\nMultiplication of matrices:\n";
    displayMatrix(result, r1, c2);
}

void transpose(int a[MAX][MAX], int r, int c)
{
    int result[MAX][MAX];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[j][i] = a[i][j];

    cout << "\nTranspose of matrix:\n";
    displayMatrix(result, c, r);
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    readMatrix(a, r1, c1);

    cout << "\nEnter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    readMatrix(b, r2, c2);

    do
    {
        cout << "\n===== MATRIX OPERATIONS =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose of Matrix A\n";
        cout << "5. Transpose of Matrix B\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                    addition(a, b, r1, c1);
                else
                    cout << "Addition is not possible.\n";
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                    subtraction(a, b, r1, c1);
                else
                    cout << "Subtraction is not possible.\n";
                break;

            case 3:
                if (c1 == r2)
                    multiplication(a, b, r1, c1, c2);
                else
                    cout << "Multiplication is not possible.\n";
                break;

            case 4:
                transpose(a, r1, c1);
                break;

            case 5:
                transpose(b, r2, c2);
                break;

            case 6:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
