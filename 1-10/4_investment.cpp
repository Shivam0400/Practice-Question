#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int P = 1000; P <= 10000; P += 1000) 
    {
        for (double r = 0.10; r <= 0.20; r += 0.01)
        {
            cout << "For P = " << P << " and r = " << r << ":\n";
            for (int n = 1; n <= 10; n++) 
            {
                double V = P * pow(1 + r, n);
                cout << "Year " << n << ": " << V << endl;
            }
            cout << "-----------------------\n";
        }
    }
    return 0;
}
