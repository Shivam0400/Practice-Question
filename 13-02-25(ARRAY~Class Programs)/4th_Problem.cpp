//Create two array of size 10. Ask user to enter values in  one array. Multiply 3 into odd indexed elements & 2 into even indexed elements. Put resulting numbers in 2nd array and print it 
#include<iostream>
using namespace std;
int main()
{
    int arr[10],arr2[10],i;
    cout<<"Enter values in array: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<10;i++)
    {
        if(i%2==0)
        {
            arr2[i]=arr[i]*2;
        }
        else
        {
            arr2[i]=arr[i]*3;
        }   
    }
    for(i=1;i<10;i++)
    {
    cout<< " " << arr2[i];
    }
}