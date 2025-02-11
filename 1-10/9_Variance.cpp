#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double arr[n], sum = 0, variance = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double mean = sum / n;

    for (int i = 0; i < n; i++) 
    {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << sqrt(variance) << endl;
    return 0;
}
