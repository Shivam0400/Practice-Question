// Create an array of size 10. Ask user to enter values. Find maximum element and print it.
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
    int max= arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
        cout<<"Maximum element: "<<max<<endl;
}   