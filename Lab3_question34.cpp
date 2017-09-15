#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,f,l,m=0,a=0,d;
  cout << "enter a no: ";
  cin >> n;
  l = n%10;
  n = n/10;
  while (n>=10){
    m = m + 1;
    d = n%10;
    a = a + pow(10,(m-1)) * d;
    n = n/10;
 
  }
  a = (10*a) + n;
  f = l*(pow(10,(m+1))) + a;
  cout << f << endl;
  return 0;
}
