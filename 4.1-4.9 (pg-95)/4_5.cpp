#include <iostream>
#define MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))
using namespace std;
int main() 
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Largest number: " << MAX(x, y, z) << endl;
    return 0;
}
