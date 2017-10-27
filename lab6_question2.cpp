#include <iostream>
using namespace std;
int main(){
  int a=2,b=3;
  int * p;
  p = &a;
  b = *p;
  cout << "a:" << a << " " << "b:" << b << " " << "*p:" << *p << endl;
  p = &b;
  cout << "a:" << a << " " << "b:" << b << " " << "*p:" << *p << endl;
  return 0;
  
}
