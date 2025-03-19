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

int power(int m, int n = 2) 
{
    int result = 1;
    for (int i = 0; i < n; i++) 
    {
        result *= m;
    }
    return result;
}

int main() 
{
    double md;
    int mi, n;
    cout << "Enter a double number and exponent: ";
    cin >> md >> n;
    cout << "Result (double): " << power(md, n) << endl;
    cout << "Enter an integer number and exponent: ";
    cin >> mi >> n;
    cout << "Result (int): " << power(mi, n) << endl;
    return 0;
}
