#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float r1,r2,a,b,c,D;
  cout << "enter the coefficients of the quadratic function(ax^2 + bx + c) in the order a,b,c: ";
  cin >> a >> b >> c;
  D = (b*b) - 4*a*c;
  if (D < 0){
    cout << "roots are imaginary and beyond the scope of this program!";}
  else{
    r1 = (-b + sqrt(D))/(2*a);
    r2 = (-b - sqrt(D))/(2*a);
    cout << "the roots are: "<< r1 << " , " << r2;}
  return 0;
} 
