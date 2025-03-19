#include <iostream>
using namespace std;

void readMatrix(int m, int n, int matrix[10][10]) 
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

int main() 
{
    int m, n, matrix[10][10];
    cout << "Enter rows and columns of the matrix: ";
    cin >> m >> n;
    readMatrix(m, n, matrix);
    return 0;
}
