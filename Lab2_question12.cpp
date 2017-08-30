#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float P,R,T,n;
  cout << "enter P,R(in decimal),T,n(no. of times interet is compounded per year)";
  cin >> P,R,T,n;
  cout << "The compound interest is: " << P*(pow((1+(R/n)),(n*T))) - P;
  return 0;
}
