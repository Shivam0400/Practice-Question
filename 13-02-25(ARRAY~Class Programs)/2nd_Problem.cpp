// Create two array of size 10. ask user to enter values in one array. multiply 3 into every element and put in another array. find sum of elements of 2nd array and print it.
#include<iostream>
using namespace std;
int main() 
{
    int arr1[10], arr2[10], i, sum = 0;
    cout << "Enter 10 elements in array 1: ";
    for (i = 0; i < 10; i++) 
    {
        cin >> arr1[i];// entering 1st array
    }
    for (i = 0; i < 10; i++) 
    {
        arr2[i] = arr1[i] * 3;
    }
    for (i = 0; i < 10; i++) 
    {
        cout<<" "<< arr2[i] ;
    }
    for (i = 0; i < 10; i++) 
    {
        sum = sum + arr2[i];
    }
    cout <<"\n Sum of elements of array 2 is: " << sum<< endl;
}
    
