#include <iostream>
using namespace std;
void readMatrix(int matrix[10][10], int m = 3, int n = 3)
{
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int m = 3, int n = 3) 
{
    cout << "Matrix is:\n";
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int matrix[10][10];
    readMatrix(matrix);
    displayMatrix(matrix);
    return 0;
}
