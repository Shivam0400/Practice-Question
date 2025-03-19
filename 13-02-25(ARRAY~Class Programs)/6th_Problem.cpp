#include <iostream>
using namespace std;
int main() 
{
    int A[3][4], B[4][3], C[3][3] = {0};
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            cin >> A[i][j];
        }
    }    
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < 4; i++) 
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
            for (int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
