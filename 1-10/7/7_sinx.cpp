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

double sinx(double x, int terms)
{
  double sum = 0;
  for (int i = 0; i < terms; i++)
  {
    if(i%2 == 0){
      sum += pow(x, 2*i+1)/factorial(2*i+1);
    }
    else{
      sum -= pow(x, 2*i+1)/factorial(2*i+1);
    }
  }
  return sum;
}

int main() {
  double x;
  int terms;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the number of terms: ";
  cin >> terms;
  cout << "sin(" << x << ") = " << sinx(x, terms) << endl;
  return 0;
}