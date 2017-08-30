#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float a;
  cout << "enter side length: ";
  cin >> a;
  cout << "area od equilateral triangle: " << (sqrt(3)/4 * pow(a,2));
  return 0;
}
