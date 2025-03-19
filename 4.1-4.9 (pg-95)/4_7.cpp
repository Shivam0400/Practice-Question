#include <iostream>
using namespace std;

double power(double m, int n = 2) 
{
    double result = 1;
    for (int i = 0; i < n; i++) 
    {
        result *= m;
    }
    return result;
}

int main() 
{
    double m;
    int n;
    cout << "Enter a number and exponent : ";
    cin >> m >> n;
    cout << "Result: " << power(m, n) << endl;
    return 0;
}
