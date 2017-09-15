#include <iostream>
using namespace std;
int main()
{
  float a;
  cout << "enter any real number" ;
  cin >> a;
  if (a>0){
  cout << a << " is positive";}
  else if(a<0){
  cout << a << " is negative";}
  else{
  cout << a << " is zero";}
  return 0; 
}
