// find sum of 2 no using function
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y;
    cout<<"Enter 1st number :"<< endl;
    cin>>x;
    cout<<"Enter 2nd number :"<< endl;
    cin>>y;
    sum(x, y);
    cout<<"Sum ="<<x+y;
}