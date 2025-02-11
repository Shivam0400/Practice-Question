#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "X\t  ";
    for (double x = 0.1; x <= 0.9; x += 0.1)
        cout << x << "\t  ";
        cout << endl;
        cout << endl;

    for (double x = 0; x <= 9; x++) 
    {
        cout << x << "\t  ";
        for (double y = 0.1; y <= 0.9; y += 0.1) 
        {
            cout << fixed << setprecision(4) << exp(-x) << "\t  ";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// int main() 
// {
//     const int width = 10; // Width for each column

//     // Print the top border
//     cout << "+----------";
//     for (double x = 0.1; x <= 0.9; x += 0.1)
//         cout << "+----------";
//     cout << "+" << endl;

//     cout << "| X        |";
//     for (double x = 0.1; x <= 0.9; x += 0.1)
//         cout << setw(width) << x << " |";
//     cout << endl;

//     // Print a separator line
//     cout << "+----------";
//     for (double x = 0.1; x <= 0.9; x += 0.1)
//         cout << "+----------";
//     cout << "+" << endl;

//     // Print the table values
//     for (double x = 0; x <= 9; x++) 
//     {
//         cout << "| " << setw(8) << x << " |"; // Print row header

//         for (double y = 0.1; y <= 0.9; y += 0.1) 
//         {
//             cout << setw(width) << fixed << setprecision(4) << exp(-x) << " |";
//         }
//         cout << endl;

//         // Print a separator line after each row
//         cout << "+----------";
//         for (double x = 0.1; x <= 0.9; x += 0.1)
//             cout << "+----------";
//         cout << "+" << endl;
//     }
    
//     return 0;
// }
