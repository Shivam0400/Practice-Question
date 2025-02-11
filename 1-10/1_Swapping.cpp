#include <iostream>
using namespace std;

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x = 10, y = 5;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, temp;

//     cout << "Enter the first number (a): ";
//     cin >> a;
//     cout << "Enter the second number (b): ";
//     cin >> b;

//     cout << "Before swapping: a = " << a << ", b = " << b << endl;

//     temp = a; 
//     a = b;    
//     b = temp; 

//     cout << "After swapping: a = " << a << ", b = " << b << endl;

//     return 0;
// }