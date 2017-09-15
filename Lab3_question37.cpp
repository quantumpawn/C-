#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,m=0,a=0;
  cout << "enter no: ";
  cin >> n;
  while (n>0){
     a = a + 1;
     m = m*10 + (n%10); 
     n = n / 10;
  } 
  cout << m;
  return 0;
}
