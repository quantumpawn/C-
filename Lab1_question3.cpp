#include <iostream>
using namespace std;
int main()
{
  int a,b,add,mult,sub;
  float div;
  cout << "Enter 2 non-zero integers to perform all arithmatic operations: ";
  cin >> a >> b;
  add = a + b;
  sub = a-b;
  mult = a*b;
  div = (float)a / b;
  cout << " addition: " << add << " subtraction: "<< sub << " multiplication: "<< mult << " division: " << div;
  return 0;
}
