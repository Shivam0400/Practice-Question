// Find minimum element 
#include <iostream>
using namespace std;
int main() 
{
    int arr[10], i;
    cout << "Enter 10 elements: ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int min= arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
        cout<<"Minimum element: "<< min <<endl;
}   