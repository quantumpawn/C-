#include <iostream>
using namespace std;
int main()
{
  float r,d,A,C;
  cout << "enter radius: ";
  cin >> r;
  d = 2*r;
  A = 3.1415*(r*r);
  C = 2*3.1415*r;
  cout << "Diameter: "<< d << " Area: "<< A << " Circumference: " << C;
  return 0;
}
