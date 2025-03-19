// create a 2D array of size 3*4. Ask user to enter values in it. Find maximum and print it.
#include<iostream>
using namespace std;
int main() 
{
    int a[3][4], i, j, max = 0;
    cout << "Enter values in 2D array:\n";
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
    }
}
cout<<"\n Maximum element in the array: "<< max << endl;
}