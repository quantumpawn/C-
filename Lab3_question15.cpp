#include <iostream>
using namespace std;
int main(){
  float a,b,c;
  cout << "enter side lengths of triangle: ";
  cin >> a >> b >> c;
  if ((a+b > c)&&(b+c > a)&&(c+a>b)){
    cout << "triangle!";}
  else{
  cout << "not a triangle";}
  return 0;
}
  
