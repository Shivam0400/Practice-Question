#include <iostream>
using namespace std;

double area(double base, double height) 
{
    return 0.5 * base * height;
}

double area(double radius) 
{
    return 3.14159 * radius * radius;
}

int main() 
{
    double base, height, radius;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;
    return 0;
}
