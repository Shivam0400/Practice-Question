#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n)
{
  if(n == 0){
    return 1;
  }
  return n*factorial(n-1);
}

double cosx(double x, int terms)
{
  double sum = 1;
  for (int i = 0; i < terms; i++)
  {
    if(i > 0)
    {
      if(i % 2 == 0)
      {
        sum += pow(x, 2*i) / factorial(2*i);
      }
      else
      {
        sum -= pow(x, 2*i) / factorial(2*i);
      }
    }
  }
  return sum;
}

int main() 
{
  double x;
  int terms;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the number of terms: ";
  cin >> terms;
  cout << "cos(" << x << ") = " << cosx(x, terms) << endl;
  return 0;
}