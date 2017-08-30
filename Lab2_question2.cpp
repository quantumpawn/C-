#include <iostream>
using namespace std;
int main()
{
  float C,F;
  cout << "enter temperature in Celsius: ";
  cin >> C;
  F = (float(9)/5)*C + 32;
  cout << "temperature in farenheit: " << F;
  return 0;
} 
