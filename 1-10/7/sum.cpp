#include <iostream>
#include <cmath>
using namespace std;
double sum(int terms)
{
  double sum = 1;
  for (int i = 2; i <= terms; i++)
  {
    sum += pow(1.0/i, i);
  }
  return sum;
}
int main() 
{
  int terms;
  cout << "Enter the number of terms: ";
  cin >> terms;
  cout << "SUM = " << sum(terms) << endl;
  return 0;
}