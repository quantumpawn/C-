#include <iostream>
using namespace std;
int main()
{
  float a,b,c,max;
  cout << "enter 3 nos. for comparison: ";
  cin >> a >> b >> c;
  if (a>b){
  max = a;
    if (c>a){
    max = c;}
  }
  else{
  max = b;
    if (c>b){
    max = c;}
  }
  cout << "max. of a,b,c is : " << max;
  return 0; 
}
