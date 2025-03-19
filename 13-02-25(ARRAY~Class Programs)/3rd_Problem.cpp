#include<iostream>
using namespace std;
int main() 
{
    int arr1[10], arr2[10], arr3[10], i, sum = 0;
    cout << "Enter 10 elements in array 1: ";
    for (i = 0; i < 10; i++) 
    {
        cin >> arr1[i];
    }
    cout << "Enter 10 elements in array 2: ";
    for (i = 0; i < 10; i++) 
    {
        cin >> arr2[i];
    }
    for (i = 0; i < 10; i++)
    {
        arr3[i] = 3*arr1[i] + 2*arr2[i];
    }
    for (i = 0; i < 10; i++)
    {
        cout<< " "<< arr3[i];
    }
}
