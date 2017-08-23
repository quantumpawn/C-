#include <iostream>
using namespace std;
int main()
{
  float a,b,peri;
  cout << "Enter length, breadth: ";
  cin >> a >> b;
  peri = 2*(a+b);
  cout << "perimeter of the rectangle: "<<peri;
  return 0; 
}
