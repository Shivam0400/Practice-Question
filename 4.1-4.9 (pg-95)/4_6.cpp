#include <iostream>
using namespace std;

inline int maxNum(int a, int b, int c) 
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() 
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Largest number: " << maxNum(x, y, z) << endl;
    return 0;
}
