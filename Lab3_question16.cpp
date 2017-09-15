#include <iostream>
using namespace std;
int main(){
  float a,b,c;
  cout << "enter the side lengths of the triangle: ";
  cin >> a >> b >> c;
  if ((a == b) && (b == c)){
    cout << "equilateral";}
  else if ((a==b) || (b == c)){
    cout <<"isoceles";}
  else{
    cout << "scalene";}
  return 0;
} 
