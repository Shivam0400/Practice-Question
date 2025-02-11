#include <iostream>
using namespace std;
double calculateBill(int units)
{
    double charge;
    if (units <= 100) 
        charge = units * 0.60;
    else if (units <= 300) 
        charge = 100 * 0.60 + (units - 100) * 0.80;
    else 
        charge = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;

    if (charge < 50)
        charge = 50;

    if (charge > 300)
        charge += 0.15 * charge;

    return charge;
}

int main() 
{
    int users, units;
    cout << "Enter number of users: ";
    cin >> users;

    for (int i = 0; i < users; i++) 
    {
        cout << "Enter units for user " << i + 1 << ": ";
        cin >> units;
        cout << "Bill: Rs. " << calculateBill(units) << endl;
    }

    return 0;
}
