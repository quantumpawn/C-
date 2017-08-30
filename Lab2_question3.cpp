#include <iostream>
using namespace std;
int main()
{
  float F,C;
  cout << "enter temperature in farenheit: ";
  cin >> F;
  C = float(5)*(F-32)/9;
  cout << "temperature in celsius: "<< C;
  return 0;
}
